//
// Created by Marcel Ghisi on 24/02/22.
//

#include "../shell.h"
#include "stdlib.h"
#include "../parser.h"
#include "../my_split.h"

int set_environment(char *argument)
{
    //while(parser->tokens){
    string_array* pair = my_split(argument,"=");
    const char* left = pair->array[0];
    const char* right = pair->array[1];
    int result = setenv(left,right,1);
    //printf(argument);
    //int result = putenv("TE=2");
    free(pair->array[0]);
    free(pair->array[1]);
    free(pair);
    return result;
}