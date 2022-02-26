#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <my_split.h>

/*
**
** QWASAR.IO -- my_split
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {string_array*}
**
*/


int count_items(char* param_1,char char_to_count){
    int count = 0;
    while (*param_1 != 0)
    {
        char letter = *param_1;
        if (letter == char_to_count){
            count++;
        }
        param_1++;
    }
    return count;
}

char** create_words(char* param_1,char character,int size){

    char** words = (char**)malloc(((size+1) * sizeof(char*)));
    words[size] = 0;
    int current_word = 0;
    while (*param_1 != 0)
    {
        char* word = malloc(50);
        int index = 0;
        while (*param_1 != 0)
        {
            if (*param_1 == character || *param_1 == 0){
                word[index] = 0;
                words[current_word] = word;
                current_word++;
                break;
            }
            word[index]= *param_1;
            index++;
            param_1++;
        }
        if(*param_1 == 0){
            word[index] = 0;
            words[current_word] = word;
            break;
        }
        param_1++;
    }
    //char **p = words;
    return words;
}

string_array* my_split(char* param_1, char* param_2)
{
    int size = count_items(param_1,*param_2)+1;
    char** words = create_words(param_1,*param_2,size);
    string_array* str = (string_array*)malloc(sizeof(string_array));
    str->size = size-1;
    str->array = words;
    return str;
}