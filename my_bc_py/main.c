#include <stdio.h>
#include "my_token.h"
#include "my_lexer.h"

int main() {
    printf("Hello, World!\n");
    Lexer* lexer;
    Lexer_ctor(lexer,"33/22+55%66(-2+5)");
    char* errors = Lexer_GenTokens(lexer);
    printf("%s",errors);
    return 0;
}
