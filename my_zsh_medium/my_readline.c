//
// Created by Marcel Ghisi on 30/01/22.
//

#include "shell.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "utils.h"

int my_putchar(char c){
    write(1, &c, 1);
    return 0;
}
void my_putstr(char* param_1){

    // print the string
    while(*param_1 != '\0') {
        my_putchar(*param_1);
        param_1++;
    }
}

char* substring(char* param_1,int start,int end){
    char* hour = malloc(3);
    int count = 0;
    for (int i = start; i <= end;i++){
        hour[count] = param_1[i];
        count++;
    }
    hour[count] = 0;
    return hour;

}

char *read_cmd(int fd){
    if (fd<0) return NULL;
    int len = (sizeof(char) * READLINE_READ_SIZE);
    static char *buffer;
    buffer = malloc(len+1);
    memset(buffer, 0, len);
    char* returning = NULL;
    //fill a block of memory with a particular value


    while (read(fd, buffer, READLINE_READ_SIZE) != 0){
        int buflen = strlen(buffer);
        if(buffer[buflen-1] == '\n')
        {
            if (returning == NULL){
                returning = (char*)malloc(buflen);
                strcat(returning, substring(buffer,0,buffer[buflen-2] == '\\' ? buflen-3 : buflen-2));
            } else {
                    char* ptr_for_realloc = realloc(returning, strlen(returning)+buflen+1);
                    strcat(ptr_for_realloc, substring(buffer,0,buffer[buflen-2] == '\\' ? buflen-3 : buflen-2));
                    returning = ptr_for_realloc;
            }
            if(buflen == 1 || buffer[buflen-2] != '\\')
            {
                return returning;
            }
            free(buffer);
            buffer = NULL;
            buffer = malloc(len+1);
            memset(buffer, 0, len);
            print_int_std_out(0);
        }
    };
    free(buffer);
    return returning;
}

