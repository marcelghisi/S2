//
// Created by Marcel Ghisi on 31/10/21.
//
#include "my_token.h"
#include "my_lexer.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



void Lexer_ctor(Lexer* me,char* math_expression) {
    me->expression = math_expression;
    me->tokens = NULL;
}

int my_atoi(char* param_1)
{
    int result = 0;
    while(*param_1 != 0)
    {
        if(*param_1 - '0' >= 0 && *param_1 - '0' <= 9)
        {
            result = result * 10 +  *param_1 - '0';

        }
        param_1++;
    }
    return result;
}

int my_isdigit(char* guess){
    int all_numbers = 1;
    while (*guess != 0){
        if (*guess < 48 || *guess >57){
            all_numbers = 0;
        }
        guess++;
    }
    return  all_numbers;
}

int is_digit_next_number(char* guess){
    int is_number = 1;

    if (*guess < 48 || *guess >57){
        is_number = 0;
    }

    return  is_number;
}

int generate_number(char* number, char* error){

    if (my_isdigit(number)){
        return my_atoi(number);
    }
    if (error){
        error = "not a valid number";
    }
    return -1;
}

Token* check_number(char* current_number,char* next_token,Token* head,char* error){
    if(current_number != 0 && is_digit_next_number(next_token) == 0){
        char* with_error = 0;
        int number = generate_number(current_number,with_error);
        if (with_error != NULL){
            error = with_error;
            return NULL;
        } else {
            head = add_token(head,number,NUMBER);
            current_number = 0;
        }
    }
    return head;
}

char* create_current_number(char* current_number,unsigned long size,char* next_token){
    if(current_number == NULL){
        current_number = (char*)malloc(size);
        memset(current_number,0,size);
    }
    return current_number;
}

/*int is_defined_token(char* current_token){
    int defined = 0;
    while (all_tokens != 0 ){
        if (*all_tokens == *current_token){
            defined = 1;
        }
        all_tokens++;
    }
    return defined;
}*/

char* Lexer_GenTokens(Lexer* me){
    Token *head = NULL;
    char* current_number = 0;
    char* has_error = 0;
    char* expression = me->expression;
    while (*expression != 0){
        char* next_expression = expression+1;
        switch (*expression) {
            case ' ':
            case '\t':
                head = add_token(head,0,SPACE);
            break;
            case '(':
                head = add_token(head,0,L_ROUND_BRACKET);
            break;
            case ')':
                head = add_token(head,0,R_ROUND_BRACKET);
            break;
            case '%':
                head = add_token(head,0,MODULE);
            break;
            case '+':
                head = add_token(head,0,PLUS);
            break;
            case '-':
                head = add_token(head,0,MINUS);
            break;
            case '*':
                head = add_token(head,0,MULTIPLY);
            break;
            case '/':
                head = add_token(head,0,DIVIDE);
            break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':

                if (current_number == NULL){
                    current_number = create_current_number(current_number,strlen(expression) + 1,next_expression);
                }

                char cut_value[2] = {0, 0};
                cut_value[0] = expression[0];

                strcat(current_number, cut_value);

                if (*next_expression == '\0' || is_digit_next_number(next_expression) == 0){
                    head = check_number(current_number,next_expression,head,has_error);
                    current_number = create_current_number(current_number,strlen(expression) + 1,next_expression);
                }

            break;
        }
        if(has_error != 0){
            break;
        }
        expression++;
    }
    if (has_error != 0){
        return has_error;
    }
    me->tokens = head;
    return 0;
}
