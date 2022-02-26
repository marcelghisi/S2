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

char*  remaining = NULL;

char* trimBuffer(char* s,char ** remaining){

    *remaining = malloc(sizeof(char) * strlen(s) +1 );

    char* ret = malloc(sizeof(char) * strlen(s) +1);
    memset(ret,0,sizeof(char) * strlen(s) +1);
    char* rem = strchr(s,'\n');
    rem++;

    strcpy(*remaining,rem);

    strncpy(ret, s , (strlen(s) - strlen(*remaining)));
    unsigned long len = strlen(ret);
    
    if( ret[len-1] == '\n' )
        ret[len-1] = 0;
    return ret;

}

char* strjoin(char* str1,char* str2){
    unsigned long size = strlen(str1) + strlen(str2) +1;
    char *ret = malloc(sizeof(char) * size);
    memset(ret,0,sizeof(char) * size);
    strcpy(ret, str1);
    strcat(ret, str2);
    //printf("str joi ret %s",ret);
    return ret;
}

char* my_readline(int fd){

    char *ret = NULL;
    char buffer[BUFF_SIZE + 1] ;
    memset(buffer,0,BUFF_SIZE +1);
    ssize_t bytes_read;

    char *fullBuffer = (char*)malloc(BUFF_SIZE + 1);
    memset(fullBuffer,0,BUFF_SIZE +1);

    if (remaining){
        if (remaining[0] == '\n'){
            char* emptyLine = "\n";
            remaining++;
            return emptyLine;
        } else {
            fullBuffer = strjoin(fullBuffer, remaining);
        }
    }

    memset(buffer,0,BUFF_SIZE +1);
    bytes_read = read(fd, buffer, BUFF_SIZE);

    while(bytes_read > 0){

        fullBuffer = strjoin(fullBuffer, buffer);
        if (strchr(fullBuffer,'\n') != NULL)
        {
            ret = trimBuffer(fullBuffer,&remaining);
            return ret;
        }
        memset(buffer,0,BUFF_SIZE +1);
        bytes_read = read(fd, buffer, BUFF_SIZE);
        if (bytes_read == 0){
            ret = fullBuffer;
        }
    }

    return ret;

}
