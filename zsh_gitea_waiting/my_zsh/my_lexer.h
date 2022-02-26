//
// Created by Marcel Ghisi on 31/10/21.
//
#include "my_token.h"
#define MAXARGS 63

#ifndef MY_ZSH_PY_MY_LEXER_H
#define MY_ZSH_PY_MY_LEXER_H



/* Lexer's attribute... */
typedef struct {
    /* constructor implementation */
    char* typed_command;
    char** environment_vars;
    Token* tokens;
} Lexer;

/* constructor implementation */
void Lexer_ctor(Lexer* me, char* typed, char** env);

// Generate tokens method
char* Lexer_GenTokens(Lexer* me);


#endif //MY_ZSH_PY_MY_LEXER_H
