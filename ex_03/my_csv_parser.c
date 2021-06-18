#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//  main.c
//  my_csv_parser
//
//  Created by Marcel Ghisi on 17/06/21.
//

/*
**
** QWASAR.IO -- my_csv_parser
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {string_array_array*}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_STRING_ARRAY_ARRAY
#define STRUCT_STRING_ARRAY_ARRAY
typedef struct s_string_array_array
{
    int size;
    string_array** array;
} string_array_array;
#endif


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

int count_commas(char* param_1,char character){
    int count = 0;
    while (*param_1 != 0 && *param_1 != '\n')
    {
        char letter = *param_1;
        if (letter == character){
            count++;
        }
        param_1++;
    }
    return count;
}

string_array_array* my_csv_parser(char* param_1, char* param_2)
{
    
    int size = count_char(param_1,'\n');
    string_array** array_array = (string_array**)malloc(((size+1) * sizeof(string_array*)));

    int counting_main_array = 0;
    while(*param_1 != 0){
        int ncommas = count_commas(param_1, *param_2);
        int number_of_words = ncommas + 1;
        char** first_get_the_internal_array = (char**)malloc(((number_of_words+1) * sizeof(char*)));

        int index = 0;
        while (*param_1 != '\n'){

            char* current_word = (char*)malloc(50);
            char* save_state = current_word;
            while (*param_1 != *param_2 && *param_1 != '\n' && *param_1 != 0)
            {
                *current_word = *param_1;
                current_word++;
                param_1++;
            }
            *current_word = 0;
            first_get_the_internal_array[index] = save_state;
            index++;
            if (*param_1 != '\n'){
                param_1++;
            }
        }
        
        first_get_the_internal_array[index] = 0;
        
        string_array* second_wrap_first_in_struct = (string_array*)malloc(sizeof(string_array));
        second_wrap_first_in_struct->size = number_of_words;
        second_wrap_first_in_struct->array = first_get_the_internal_array;
        
        //third put the wraped struct in array of string array
        array_array[counting_main_array] = second_wrap_first_in_struct;
        counting_main_array++;
        param_1++;
    }
    
    array_array[counting_main_array] = 0;
    
    string_array_array* str = (string_array_array*)malloc(sizeof(string_array_array));
    str->size = size;
    str->array = array_array;
    printf("%s",str->array[0]->array[0]);
    return str;

}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    string_array_array* lines = my_csv_parser("a,b,c,e\n1,2,3,4\n",",");
    
    return 0;
}
