//
// Created by Marcel Ghisi on 30/01/22.
//

#include "my_token.h"
#include "nodes.h"
#include "my_token.h"

#ifndef MY_ZSH_MEDIUM_PARSER_H
#define MY_ZSH_MEDIUM_PARSER_H

typedef struct {
    struct token_s* current_token;
    struct token_s* tokens;
} Parser;

void Parser_ctor(Parser* me,struct token_s* tokens);

// Parse and get the result
int Parser_parse(Parser* me,char* error);

void Parser_exec(Parser* me);

struct node_s* Parser_simple_command(Parser* me);

#endif //MY_ZSH_MEDIUM_PARSER_H
