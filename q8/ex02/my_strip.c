#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strip
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_strip(char* param_1)
{
    char* new_line = malloc(strlen(param_1));
    int size = strlen(param_1);
    char* save = new_line;
    char* current_line = param_1;
    char last_char = *current_line;
    int count = 0;
    while(*current_line !=0){
        if((last_char == ' ' && *current_line == ' ') || (*current_line == ' ' && count == size-1)){
            last_char = *current_line;
            current_line++;
            count++;
            continue;
        }else {
            *new_line = *current_line;
            new_line++;
        }
        last_char = *current_line;
        current_line++;
        count++;
    }
    return save;
}

int main(){

    char* teste = my_strip("See? It's easy to print the same thing");

    return 0;
}