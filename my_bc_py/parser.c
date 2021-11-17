//
// Created by Marcel Ghisi on 07/11/21.
//

#include "parser.h"
#include "my_token.h"
#include <stdlib.h>
#include <string.h>

int expr(Parser* me);

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


// match expected and move ahead
void match(Parser* me,TokenType expected) {

    if (me->current_token->type == expected) {
        Parser_next(me);
        return;
    }

    fprintf(stderr, "Expected %c, got %c", expected, me->current_token->type);
    exit(1);
}

int factor(Parser* me){
    int result = 0;
    if (me->current_token->type == L_ROUND_BRACKET){
        match(me,L_ROUND_BRACKET);
        result = expr(me);
        match(me,R_ROUND_BRACKET);
    } else if (me->current_token->type == NUMBER){
        result = me->current_token->value;
        Parser_next(me);
    }
    return result;
}

int term(Parser* me){
    int result = factor(me);
    while (me->current_token != NULL && (me->current_token->type == MULTIPLY || me->current_token->type == DIVIDE || me->current_token->type == MODULE))
    {
        if (me->current_token->type == MULTIPLY){
            Parser_next(me);
            result = MultipliedNode_ctor(result, factor(me))->result;
        } else if (me->current_token->type == DIVIDE){
            Parser_next(me);
            result = DividedNode_ctor(result, factor(me))->result;
        } else if (me->current_token->type == MODULE){
            Parser_next(me);
            result = ModuleNode_ctor(result,factor(me))->result;
        }
    }
    return result;
}


int expr(Parser* me){
    int result = term(me);
    while (me->current_token != NULL && (me->current_token->type == PLUS || me->current_token->type == MINUS))
    {
        if (me->current_token->type == PLUS){
            Parser_next(me);
            result = AddedNode_ctor(result, term(me))->result;
        } else if (me->current_token->type == MINUS){
            Parser_next(me);
            result = SubtractedNode_ctor(result, term(me))->result;
        }
    }
    return result;
}

int Parser_parse(Parser* me, char* error){
    int result = expr(me);
    if (me->current_token != NULL || me->tokens == NULL){
        strcat(error,"parsing error");
        return NULL;
    }
    return result;
}
