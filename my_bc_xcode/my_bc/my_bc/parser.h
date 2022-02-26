//
// Created by Marcel Ghisi on 07/11/21.
//
#include "my_token.h"
#include "nodes.h"

#ifndef MY_BC_PY_PARSER_H
#define MY_BC_PY_PARSER_H

typedef struct {
    Token* current_token;
    Token* tokens;
} Parser;

void Parser_ctor(Parser* me,Token* tokens);

//Set the current token to next
void Parser_next(Parser* me);

// Parse and get the result
int Parser_parse(Parser* me, char* error);


#endif //MY_BC_PY_PARSER_H

