#include <stdio.h>
#include "my_token.h"
#include "my_lexer.h"
#include "parser.h"

int main() {
    printf("Hello, World!\n");
    Lexer* lexer;
    //Lexer_ctor(lexer,"33/22+55%66(-2+5)");
    Lexer_ctor(lexer,"20%3");
    char* errors = Lexer_GenTokens(lexer);
    Parser parser;
    Parser_ctor(&parser,lexer->tokens);
    int final_result = Parser_parse(&parser);
    printf("%s %d","Resultado ",final_result);

    return 0;
}
