//
// main.c
// my_christmas_tree
//
// Created by Marcel Ghisi on 10/06/21.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countFirst(char * word_to_Count){
    int count = 0;
    while(*word_to_Count != '\0')
    {
        count++;
        word_to_Count++;
    }
    return 0;
}
char* rostring(char* param_1)
{
    int size_of_first_word = countFirst(param_1);
    int size_of_second_word = strlen(param_1) - size_of_first_word;
    char * first_word = (char *)malloc(size_of_first_word + 1);
    char * save_first_pointer = first_word;
    char * second_word = (char *)malloc(size_of_second_word + 1);
    char* save_second_word = second_word;

    while(*param_1 != ' ')
    {
        *first_word = *param_1;
        param_1++;
        first_word++;
    }
    while(*param_1 != '\0')
    {
        *second_word = *param_1;
        param_1++;
        second_word++;
    }

    char * result = strcat(save_first_pointer, save_second_word);
    return result;
}

int main(int argc, const char * argv[]) {

    char* stages = rostring("abc ");

    int ola =  2 +  2;

    printf("%d",ola);

    return 0;
}
