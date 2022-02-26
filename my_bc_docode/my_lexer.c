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

int is_math_signal(char* guess){
    int is_valid_signal = 0;
    switch (*guess) {
        case '/' :
            is_valid_signal = 1;
            break;
            case '*' :
                is_valid_signal = 1;
                break;
                case '+' :
                    is_valid_signal = 1;
                    break;
                    case '-' :
                        is_valid_signal = 1;
                        break;
                        case '%' :
                            is_valid_signal = 1;
                            break;
                                default :
                                    is_valid_signal = 0;
    }
    return is_valid_signal;
}

int is_valid_signal_syntax(char* guess){
    int is_valid_signal = 0;
    switch (*guess) {
        case '/' :
            is_valid_signal = 1;
            break;
        case '*' :
            is_valid_signal = 1;
            break;
        case '+' :
            is_valid_signal = 1;
            break;
        case '-' :
            is_valid_signal = 1;
            break;
        case '%' :
            is_valid_signal = 1;
            break;
        case '(' :
            is_valid_signal = 1;
            break;
        default :
            is_valid_signal = 0;
    }
    return is_valid_signal;
}

int is_signal(char* guess){
    int is_valid_signal = 0;
    switch (*guess) {
        case '/' :
            is_valid_signal = 1;
            break;
        case '*' :
                is_valid_signal = 1;
            break;
        case '+' :
                is_valid_signal = 1;
            break;
        case '-' :
                is_valid_signal = 1;
            break;
        case '%' :
                is_valid_signal = 1;
            break;
        default :
               is_valid_signal = 0;
    }
    return is_valid_signal;
}

int is_signal_work_togetter(char* guess){
    int is_valid_signal = 0;
    switch (*guess) {
        case '-' :
            is_valid_signal = 1;
            break;
        default :
            is_valid_signal = 0;
    }
    return is_valid_signal;
}
int is_zero_next_number(char* guess,char* error){
    int is_number = 1;
    int number;

    if ((*guess < 48 || *guess >57) && (is_valid_signal_syntax(guess) == 0)){
        is_number = 0;
        //char* new_error = malloc(100);
        strcat(error,"parser error\ncalc> ");
        return is_number;
    }

    number = my_atoi(guess);
    if (number == 0) {
        strcpy(error,"can not divide by zero\ncalc> ");
        return 0;
    }

    return  is_number;
}

int check_pair(char* current,char* next){
    int is_valid_signal = 1;
    switch (*current) {
        case '/' :
        case '*' :
        case '+' :
        case '-' :
        case '%' :
        case '(' :
            if (is_signal(next)){
                if (is_signal_work_togetter(next) == 0){
                    is_valid_signal = 0;
                }
            }
            break;
        default :
            is_valid_signal = 1;
    }
    return is_valid_signal;
}

int is_next_valid_on_syntax(char* current,char* guess,char* error){
    if (is_digit_next_number(guess) == 0){
        if (is_valid_signal_syntax(guess) == 0){
            strcat(error,"syntax error\ncalc> ");
            return 0;
        } else {
            //if next is signal and current also sintax error
            if (is_valid_signal_syntax(current) == 1 && is_signal(guess) == 1){
                if (check_pair(current,guess) == 0){
                    strcat(error,"syntax error\ncalc> ");
                    return 0;
                } else {
                    return 1;
                }
            } else {
                return 1;
            }
        }
    } else {
        return 1;
    }
}

int generate_number(char* number, char* error){

    if (my_isdigit(number)){
        return my_atoi(number);
    }
    if (error){
        error = "not a valid number\ncalc> ";
    }
    return -1;
}

Token* check_number(char* current_number,char* next_token,Token* head,char* error){
    if(current_number != 0 && is_digit_next_number(next_token) == 0){
        char* with_error = (char*)malloc(100);
        memset(with_error,0,100);
        int number = generate_number(current_number,with_error);
        if (*with_error != 0 && error){
            error = with_error;
            return NULL;
        } else {
            head = add_token(head,number,NUMBER);
            current_number = 0;
        }
        free(with_error);
    }

    return head;
}


char* create_current_number(char* current_number,int size,char* next_token){
    if(current_number == NULL || is_digit_next_number(next_token) == 0){
        char* new_number =  (char*)malloc(size);
        memset(new_number,0,size);
        return new_number;
    } else {
        return current_number;
    }
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

char* remove_spaces(char* param){
    char* new_expression = malloc(strlen(param));
    char* saving_p = new_expression;
    memset(new_expression,0, strlen(param));
    while (*param){
        if (*param == '\n'){
            param++;
            continue;
        }
        if (*param != ' '){
            *new_expression = *param;
            new_expression++;
        }
        param++;
    }
    return saving_p;
}

char* Lexer_GenTokens(Lexer* me){
    Token *head = NULL;
    char* current_number = 0;
    char* has_error = 0;
    char* expression = me->expression;
    expression = remove_spaces(expression);
    while (*expression != 0){
        char* next_expression = expression+1;

        char* syntax_error = malloc(100);
        memset(syntax_error,0,100);
        if (is_valid_signal_syntax(expression) == 1 && *next_expression != '\n'){
            if (is_next_valid_on_syntax(expression,next_expression,syntax_error) == 0){
                has_error =  syntax_error;
                break;
            }
            if (*next_expression != '(' && is_digit_next_number(next_expression) == 0){
                if (is_valid_signal_syntax(next_expression) == 0 ){
                    has_error = "syntax error\ncalc> ";
                    break;
                }
            }
        }

        switch (*expression) {
            case ' ':
                case '\t':
                    case '\n':
                    //head = add_token(head,0,SPACE);
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
                                        if(1==1){};
                                        char* error = malloc(100);
                                        memset(error,0,100);
                                        if (*next_expression == '\0' || is_zero_next_number(next_expression, error) == 0){
                                            has_error = error;
                                        }
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
                                                                                    free(current_number);
                                                                                    current_number = NULL;
                                                                                    current_number = create_current_number(current_number,strlen(expression) + 1,next_expression);
                                                                                }

                                                                                break;
                                                                                default:
                                                                                    has_error = "parser error\ncalc> ";
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
    free(current_number);
    return 0;
}
