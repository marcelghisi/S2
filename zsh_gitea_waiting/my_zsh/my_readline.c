//
// Created by Marcel Ghisi on 16/11/21.
//
#include "my_readline.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

/*
char*  remaining = NULL;

char* trimBuffer(char* s,char * remaining,char* buffer){

    remaining = malloc(200);
    memset(remaining,0,200);

    char* ret = buffer;
    //memset(ret,0,200);

    char* rem = strchr(s,'\n');
    rem++;

    strcpy(remaining,rem);

    strncpy(ret, s , (strlen(s) - strlen(remaining)));

    unsigned long len = strlen(ret);

    if( ret[len-1] == '\n' )
        ret[len-1] = 0;

    free(remaining);
    remaining = NULL;

    return ret;

}

char* strjoin(char* str1,char* str2){
    unsigned long size_of_s1 = 0;
    unsigned long size_of_s2 = 0;
    if (*str1 != '\0'){
        size_of_s1 = strlen(str1);
    }
    if (*str2 != '\0'){
        size_of_s2 = strlen(str2);
    }
    unsigned long size = size_of_s1 + size_of_s2 +1;
    char *ret = malloc(sizeof(char) * size);
    memset(ret,0,sizeof(char) * size);
    strcpy(ret, str1);
    strcat(ret, str2);
    //printf("str joi ret %s",ret);
    return ret;
}

char* my_readline(int fd){

    char *ret = malloc(200);
    memset(ret,0,200);

    char* buffer = malloc(BUFF_SIZE+1);
    memset(buffer,0,BUFF_SIZE+1);

    ssize_t bytes_read;
    char *fullBuffer = (char*)malloc(1000);
    memset(fullBuffer,0,1000);

    if (remaining){
        if (remaining[0] == '\n'){
            char* emptyLine = malloc(1);
            memset(buffer,0,1);
            remaining++;
            free(fullBuffer);
            fullBuffer = NULL;
            return emptyLine;
        } else {
            fullBuffer = strjoin(fullBuffer, remaining);
        }
    }

    bytes_read = read(fd, buffer, BUFF_SIZE);

    while(bytes_read > 0){

        fullBuffer = strjoin(fullBuffer, buffer);

        if (strchr(fullBuffer,'\n') != NULL)
        {
            ret = trimBuffer(fullBuffer,remaining, ret);

            free(fullBuffer);
            fullBuffer = NULL;
            return ret;
        }

        memset(buffer,0,BUFF_SIZE);

        bytes_read = read(fd, buffer, BUFF_SIZE);

        if (bytes_read == 0){
            ret = fullBuffer;
        }

    }



    free(fullBuffer);
    fullBuffer = NULL;

    free(buffer);
    buffer = NULL;
    return ret;

}
*/
char *my_readline(int fd){
    if (fd<0) return NULL;
    int len = (sizeof(char) * READLINE_READ_SIZE);
    static char *buffer;
    buffer = malloc(len+1);
    char* returning = NULL;
    //fill a block of memory with a particular value
    memset(buffer, 0, len);

    if (read(fd, buffer, READLINE_READ_SIZE) == 0){

        int buflen = strlen(buffer);

        if(buffer[buflen-1] == '\n')
        {
            if(buflen == 1 || buffer[buflen-2] != '\\')
            {
                return buffer;
            }

            //ptr[ptrlen+buflen-2] = '\0';
            buflen -= 2;
            print_prompt2();
        } else {

        }
    };
    //while (size > 0)
    //{
    //    my_putstr(buffer);
    //    if (buffer[sizeof(buffer) - 1] != '\n')
    //        my_putstr("\n");
    //}

    return buffer;
}
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
