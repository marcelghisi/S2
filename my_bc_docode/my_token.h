//
// Created by Marcel Ghisi on 31/10/21.
//

#include <stdio.h>

#ifndef MY_BC_PY_MY_BC_H
#define MY_BC_PY_MY_BC_H

//const char* all_tokens = "+-/*%()";

typedef enum TokenType_S {
    NUMBER = 0,
    PLUS = 1,
    MINUS = 2,
    MULTIPLY = 3,
    DIVIDE = 4,
    MODULE = 5,
    L_ROUND_BRACKET = 6,
    R_ROUND_BRACKET = 7,
    SPACE = 8
} TokenType;


typedef struct Token_S {
    TokenType type;
    struct Token_S *next;
    int value;
} Token;

Token* add_token(Token *head,int value,TokenType type);

#endif //MY_BC_PY_MY_BC_H
