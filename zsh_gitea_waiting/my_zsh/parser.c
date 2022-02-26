//
// Created by Marcel Ghisi on 07/11/21.
//

#include "parser.h"
#include "my_token.h"
#include <stdlib.h>
#include <string.h>

int expr(Parser* me,char* error);

void Parser_ctor(Parser* me,Token* tokens){
    me->tokens = tokens;
    me->current_token = tokens;
}

void Parser_next(Parser* me){
    if (me->current_token == NULL){
        me->current_token = me->tokens;
    } else {
        me->current_token = me->current_token->next;
    }
}

int Parser_parse(Parser* me, char* error){

    return 0;
}
