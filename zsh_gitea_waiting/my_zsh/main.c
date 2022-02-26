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


int main(int argc,char** argv,char** envs) {

    print_version();

    int keep = 1;
    while (keep == 1){

        int file = STDIN_FILENO;
        char *buffer;
        buffer = my_readline(file);
        if (*buffer == 0 || *buffer == NULL){
            continue;
        }

        if (check_opt(buffer,'q') == 1){
            keep = 0;
            return 0;
        }
        Lexer* lexer = (Lexer*)malloc(sizeof (Lexer));
        Lexer_ctor(lexer,buffer,envs);
        char* lexer_errors = Lexer_GenTokens(lexer);
        if (lexer_errors != NULL && *lexer_errors != '\0'){
            write(STDOUT_FILENO, "parse error\n", 12);
        }
        Parser parser;
        Parser_ctor(&parser,lexer->tokens);
        char* error = (char*)malloc(100);
        memset(error,0,100);
        int final_result = Parser_parse(&parser,error);

        if (*error != '\0'){
            write(STDOUT_FILENO, "parse error\n", 12);
        } else {
            print_int_std_out(final_result);
        }
    }



    return 0;
}
