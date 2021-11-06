
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFF_SIZE 10

char*  remaining = NULL;

char* strjoin(char* str1,char* str2){
    int size = strlen(str1) + strlen(str2) +1;
    char *ret = malloc(sizeof(char) * size);
    strcpy(ret, str1);
    strcat(ret, str2);
    //printf("str joi ret %s",ret);
    return ret;
}

char* trimBuffer(char* s,char ** remaining){

    *remaining = malloc(sizeof(char) * strlen(s) +1 );

    char* ret = malloc(sizeof(char) * strlen(s) +1);

    char* rem = strchr(s,'\n');
    rem++;

    strcpy(*remaining,rem);

    strncpy(ret, s , (strlen(s) - strlen(*remaining)));

    return ret;

}

char* my_readline(int fd){

    char *ret = NULL;
    char buffer[BUFF_SIZE + 1] ;
    memset(buffer,0,BUFF_SIZE +1);
    int bytes_read;

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

int check_opt(char **argv,char equal){
    char* option = argv[1];
    if (*option == '-'){
        option++;
    }
    if (equal == *option){
        return 1;
    } else {
        return 0;
    }
}

void print_help(){
    printf("Option does not exists.\n");
    printf("Help\n");
    printf("my_readline -s\n");
    printf("my_readline -f file_to_read.txt\n");
}

int main(int argc, char **argv) {

    int file = 0;

    if (argc  <  2){
        file = open("README.md",O_RDONLY);
        if (file < 0){
            print_help();
            return 0;
        }
    } else {
        if (check_opt(argv,'s') == 1){
            file = STDIN_FILENO;
        } else if (check_opt(argv,'f') == 1){
            file = open(argv[2],O_RDONLY);
            if (file < 0){
                print_help();
                return 0;
            }
        } else {
            print_help();
            return 0;
        }
    }
    char *buffer;
    do {
        buffer = my_readline(file);
        if (buffer != 0 && buffer != NULL){
            printf("%s",buffer);
        }
    } while (buffer != 0);

    return 0;
}

//my_printf("This is a ptr %p\n", &a);
//printf("This is a ptr %p\n", &a);

//int sors = my_printf("Hello world!\n");
//my_printf("should 13:  %d\n",sors);
//my_printf("%c!\n", 'H');
//int should2 = my_printf("%c!\n", 'H');
//my_printf("Should be 3 %d \n", should2);
//int should3 = my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
//my_printf("Should be 7: %d \n", should3);
//int should4 = my_printf("Hello %s!\n", "QWASAR.IO");
//my_printf("Should be 17: %d \n", should4);
//int shouldbe5 = my_printf("Hello %s %s!\n", "Mr", "Gaetan");
//my_printf("Should be 17: %d \n", shouldbe5);
//my_printf("%d!\n", 1337);
//my_printf("%d - %d - %d!\n", 2048, 0, -1337);
//my_printf("%o!\n", 100);
//my_printf("%u!\n", 1337);
//my_printf("%x!\n", 14);
//int any_variable = 1;
//my_printf("%p!\n", any_variable);
//my_printf("NULL STRING %s!\n", (char*)NULL);
//my_printf("This is decimal to hexidecimal conversion %x \n", 2545);
//my_printf("The octal value of this number is : %o\n", 80);
//my_printf("This is the decimal %d\n", 10);
//my_printf("This is the string %s\n", "hey");
//my_printf("This is the unsigned int %u\n", 2);
//my_printf("This is the character %c %c\n", 'h', 'e');





