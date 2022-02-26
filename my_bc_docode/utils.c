//
// Created by Marcel Ghisi on 17/11/21.
//
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "utils.h"

void print_int_std_out(int value) {
    char str[20];
    memset(str,0,20);
    sprintf(str,"%d",value);
    int len = strlen(str);
    str[len] = '\n';
    printf("%s",str);
    write(STDOUT_FILENO, "calc> ", 6);
}

void print_version(){
    printf("%s","my_bc 0.01\n");
    printf("%s","Copyright 2021-2021 ELU Foundation\n");
    printf("%s","Type a math expression like: 2+3+(2*3) or type (q) to exit\n");
    write(STDOUT_FILENO, "calc> ", 6);
}
