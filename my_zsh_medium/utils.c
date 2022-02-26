//
// Created by Marcel Ghisi on 30/01/22.
//

#include "utils.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "utils.h"

void print_int_std_out(int value) {
    write(STDOUT_FILENO, "> ", 2);
}

void print_version(){
    printf("%s","my_zsh MGLM 0.01\n");
    printf("%s","Copyright 2021-2021 ELU Foundation\n");
    printf("%s","The MGLM terminal\n");
    write(STDOUT_FILENO, "$ ", 2);
}
