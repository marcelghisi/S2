//
// Created by Marcel Ghisi on 24/02/22.
//

#include "../shell.h"
#include "stdlib.h"
#include "../parser.h"
#include "../my_split.h"

int count_char(char* param_1,char character){
    int count = 0;
    while (*param_1 != 0)
    {
        char letter = *param_1;
        if (letter == character){
            count++;
        }
        param_1++;
    }
    return count;
}

int set_environment(struct node_s *root)
{
    char* argument = root->next_sibling->val.str;
    int count_equals = count_char(argument,'=');
    string_array* pair;

    //while(parser->tokens){
    if (count_equals >0){
        struct node_s *child = root->next_sibling;

        while (child){
            char* current_argument = child->val.str;
            pair = my_split(current_argument,"=");
            const char* left = pair->array[0];
            const char* right = pair->array[1];
            int result = setenv(left,right,1);
            free(pair->array[0]);
            free(pair->array[1]);
            free(pair);
            child = child->next_sibling;
        }
    } else {
        struct node_s *child = root->next_sibling;

        while (child){
            const char* left_side = child->val.str;
            const char* rigth_side = child->next_sibling->val.str;
            int result = setenv(left_side,rigth_side,1);
            child = child->next_sibling;
            child = child->next_sibling;
        }
    }


    return 1;
}