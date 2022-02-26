//
// Created by Marcel Ghisi on 31/10/21.
//

#include <stdio.h>

#ifndef MY_BC_PY_MY_BC_H
#define MY_BC_PY_MY_BC_H

//const char* all_tokens = "+-/*%()";

typedef enum TokenType_S {
    COMMAND = 0,
    AURGUMENT = 1,
    PARAMETER = 2,
    ENV_VAR = 3,
    SPACE = 8
} TokenType;


typedef struct Token_S {
    TokenType type;
    struct Token_S *next;
    int value;
} Token;

Token* add_token(Token *head,int value,TokenType type);

#endif //MY_BC_PY_MY_BC_H
//split by semicolon
//