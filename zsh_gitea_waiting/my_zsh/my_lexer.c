//
// Created by Marcel Ghisi on 31/10/21.
//
#include "my_token.h"
#include "my_lexer.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <my_split.h>


void Lexer_ctor(Lexer* me, char* typed, char** env) {
    me->typed_command = typed;
    me->environment_vars = env;
    me->tokens = NULL;
}



char* Lexer_GenTokens(Lexer* me){
    Token *head = NULL;
    char* current_number = 0;
    char* has_error = 0;
    char* expression = me->typed_command;
    //string_array* parsed_expression = my_split(expression,' ');
    
    //for(int i = 0; i < parsed_expression->size; i++)
    //{
        
        //switch (i) {
        //    case 1:
        //        has_error = "parser error\ncalc> ";
        //    break;
            
        //    default:
        //        has_error = "parser error\ncalc> ";
        //}
        //char * expression = parsed_expression->array[0];
        //head = add_token(head,0,COMMAND);

        //char * expression = parsed_expression->array[1];
        //head = add_token(head,0,AURGUMENT);

        //char * expression = parsed_expression->array[2];
        //head = add_token(head,0,AURGUMENT);

    //}

    if (has_error != 0){
        return has_error;
    }
    me->tokens = head;
    free(current_number);
    return 0;
}
