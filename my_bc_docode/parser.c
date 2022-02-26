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


// match expected and move ahead
void match(Parser* me,TokenType expected) {

    if (me->current_token->type == expected) {
        Parser_next(me);
        return;
    }

    fprintf(stderr, "Expected %c, got %c", expected, me->current_token->type);
    exit(1);
}

int factor(Parser* me,char* error){
    int result = 0;
    if (me->current_token->type == L_ROUND_BRACKET){
        match(me,L_ROUND_BRACKET);
        result = expr(me,error);
        match(me,R_ROUND_BRACKET);
    } else if (me->current_token->type == NUMBER){
        result = me->current_token->value;
        Parser_next(me);
    }
    return result;
}

int term(Parser* me, char* error){
    int result = factor(me,error);
    while (me->current_token != NULL && (me->current_token->type == MULTIPLY || me->current_token->type == DIVIDE || me->current_token->type == MODULE))
    {
        if (me->current_token->type == MULTIPLY){
            Parser_next(me);
            Node* node = MultipliedNode_ctor(result, expr(me,error));
            int valid = MultipliedNode_validate(node,error);
            if (valid == 1){
                MultipliedNode_calculate(node);
                result = node->result;
            }
            free(node);
        } else if (me->current_token->type == DIVIDE){
            Parser_next(me);
            Node* node = DividedNode_ctor(result, expr(me,error));
            int valid = DividedNode_validate(node,error);
            if (valid == 1){
                DividedNode_calculate(node);
                result = node->result;
            }
            free(node);
        } else if (me->current_token->type == MODULE){
            Parser_next(me);
            Node* node = ModuleNode_ctor(result,expr(me,error));
            int valid = ModuleNode_validate(node,error);
            if (valid == 1){
                ModuleNode_calculate(node);
                result = node->result;
            }
            free(node);
        }
    }
    return result;
}


int expr(Parser* me,char* error){
    int result = term(me, error);
    while (me->current_token != NULL && (me->current_token->type == PLUS || me->current_token->type == MINUS))
    {
        if (me->current_token->type == PLUS){
            Parser_next(me);
            Node* node = AddedNode_ctor(result, expr(me,error));
            int valid = AddedNode_validate(node,error);
            if (valid == 1){
                AddedNode_calculate(node);
                result = node->result;
            }
            free(node);
        } else if (me->current_token->type == MINUS){
            Parser_next(me);
            Node* node = SubtractedNode_ctor(result, expr(me,error));
            int valid = SubtractedNode_validate(node,error);
            if (valid == 1){
                SubtractedNode_calculate(node);
                result = node->result;
            }
            free(node);
        }
    }
    return result;
}

int Parser_parse(Parser* me, char* error){
    if (me->tokens == NULL){
        strcat(error,"please type an expression like 2+2\ncalc>");
        return 0;
    }
    int result = expr(me,error);
    if (*error != '\0'){
        return 0;
    }
    if (me->current_token != NULL || me->tokens == NULL){
        strcat(error,"parsing error\ncalc>");
        return 0;
    }
    return result;
}
