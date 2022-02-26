//
// Created by Marcel Ghisi on 30/01/22.
//
#include <stdio.h>

#ifndef MY_ZSH_MEDIUM_MY_TOKEN_H
#define MY_ZSH_MEDIUM_MY_TOKEN_H

typedef enum TokenType_S {
    COMMAND = 0,
    AURGUMENT = 1,
    PARAMETER = 2,
    ENV_VAR = 3,
    SPACE = 8
} TokenType;


typedef struct Token_SS {
    TokenType type;
    struct Token_S *next;
    char* value;
} Tokenn;

struct token_s
{
    struct source_s *src;       /* source of input */
    int    text_len;            /* length of token text */
    char   *text;               /* token text */
};

Tokenn* add_token(Tokenn *head,int value,TokenType type);

/* the special EOF token, which indicates the end of input */
extern struct token_s eof_token;

struct token_s *tokenize(struct source_s *src);

void free_token(struct token_s *tok);

#endif //MY_ZSH_MEDIUM_MY_TOKEN_H
