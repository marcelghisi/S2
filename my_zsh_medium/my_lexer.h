//
// Created by Marcel Ghisi on 30/01/22.
//

#include "my_token.h"
#include "nodes.h"
#include "source.h"

#define MAXARGS 63

#ifndef MY_ZSH_MEDIUM_MY_LEXER_H
#define MY_ZSH_MEDIUM_MY_LEXER_H

/* Lexer's attribute... */
typedef struct {
    /* constructor implementation */
    char* typed_command;
    char** environment_vars;
    struct token_s *tokens;
    struct source_s* src;
} Lexer;

/* constructor implementation */
void Lexer_ctor(Lexer* me, char* typed, char** env);

// Generate tokens method
char* Lexer_GenTokens(Lexer* me);

#endif //MY_ZSH_MEDIUM_MY_LEXER_H
