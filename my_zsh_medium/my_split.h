//
// Created by Marcel Ghisi on 30/01/22.
//

#ifndef MY_ZSH_MEDIUM_MY_SPLIT_H
#define MY_ZSH_MEDIUM_MY_SPLIT_H

typedef struct s_string_array
{
    int size;
    char** array;
} string_array;

string_array* my_split(char* param_1, char* param_2);

#endif //MY_ZSH_MEDIUM_MY_SPLIT_H
