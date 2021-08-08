//
// Created by Marcel Ghisi on 25/06/21.
//

#ifndef CLION_MY_LSLIB_H
#define CLION_MY_LSLIB_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <limits.h>
#include <dirent.h>
#include <string.h>
#include <time.h>
#include <sys/ioctl.h>
#include <unistd.h>

#define MY_LS_ENV 'M'
//
//  Header.h
//  my_ls
//
//  Created by Marcel Ghisi on 22/06/21.
//



typedef struct s_flag {
    bool flag_a;
    bool flag_t;
    int size_path;
    char** paths;
} t_flag;

typedef struct s_report {
    int size;
    char** report;
} t_report;

typedef struct s_linked_value {
    struct dirent *value;
    struct stat *file_info;
    struct tm *tm;
    struct s_linked_list_dir *next;
    long long milliseconds;
} t_linked_value;

typedef struct s_linked_list_dir {
    struct s_linked_value *value;
    struct s_linked_list_dir *next;
} t_linked_list_dir;

t_linked_value *create_element_value(struct stat* current_stat,struct dirent *read);

t_linked_list_dir* create_list(char* path,DIR *dir,t_flag flags);

char* create_path(char* path,char* file_name);

void print_names(t_linked_list_dir *list);

t_flag read_flags(int argc,const char **argv);

void sort_time_stamp(t_linked_list_dir *start);

void sort_names(t_linked_list_dir *start);

void my_ls(t_flag flags,char* path);

#endif //CLION_MY_LSLIB_H

