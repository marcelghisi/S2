#include <stdio.h>
#include "my_token.h"
#include "my_lexer.h"
#include "parser.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_readline.h"
#include "utils.h"

int check_opt(char *argv,char equal){
    char* option = argv;
    if (*option == '-'){
        option++;
    }
    if (equal == *option){
        return 1;
    } else {
        return 0;
    }
}


int main(int argc, char** argsv,char** env) {

    print_version();

    int keep = 1;
    while (keep == 1){

        int file = STDIN_FILENO;
        char *buffer = 0;
        buffer = my_readline(file);
        if (*buffer == 0 || buffer == NULL){
            continue;
        }

        if (check_opt(buffer,'q') == 1){
            keep = 0;
            return 0;
        }
        Lexer* lexer = (Lexer*)malloc(sizeof (Lexer));
        Lexer_ctor(lexer,buffer,env);
        char* lexer_errors = Lexer_GenTokens(lexer);
        if (lexer_errors != NULL && *lexer_errors != '\0'){
            int len = strlen(lexer_errors);
            write(STDOUT_FILENO, lexer_errors, len);
        } else {
            Parser* parser  = (Parser*)malloc(sizeof (Parser));
            Parser_ctor(parser,lexer->tokens);
            char* error = (char*)malloc(100);
            memset(error,0,100);
            int final_result = Parser_parse(parser,error);

            if (*error != '\0'){
                write(STDOUT_FILENO, error, strlen(error));
            } else {
                print_int_std_out(final_result);
            }
            free(error);
            free(buffer);
            free(lexer_errors);

            Token* currentParser = parser->tokens;
            while(currentParser != NULL){
                Token *delete = currentParser;
                currentParser = currentParser->next;
                free(delete);
            }
            free(parser);
        }
        free(lexer);
    }
    return 0;
}

