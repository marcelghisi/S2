//
// Created by Marcel Ghisi on 31/10/21.
//
#include "my_token.h"

#ifndef MY_BC_PY_MY_LEXER_H
#define MY_BC_PY_MY_LEXER_H

/* Lexer's attribute... */
typedef struct {
    /* constructor implementation */
    char* expression; /* entire math expression */
    Token* tokens;
} Lexer;

/* constructor implementation */
void Lexer_ctor(Lexer* me, char* math_expression);

// Generate tokens method
char* Lexer_GenTokens(Lexer* me);


#endif //MY_BC_PY_MY_LEXER_H
