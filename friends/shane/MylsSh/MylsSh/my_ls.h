#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>

struct dir
{
    char* name;
    long long milliseconds;
    struct dir* next;
};
typedef struct flags
{
    int a;
    int t;
    int size;
    struct dir* dir_container;
} flags;

struct file_tm
{
    char* name;
    long long milliseconds;
    struct file_tm* next;
};


char* my_strcat(char* dest, const char* src);

flags* load_flags(int ac, char** av);

void print_flags(flags* flag);

struct file_tm *insert(char* path, struct file_tm *head, struct dirent *entry);

void a_flag(char* str);

int my_strcmp(const char* str1, const char* str2);

struct file_tm *insert_tm(struct file_tm *head, char *name,long long mil_seconds);

int comp_tm(struct file_tm* file1, struct file_tm* file2);

long long my_difftime(long long mill_sec1, long long mill_sec2);


void both_flag(char* str);

void t_flag(char* str);

void no_flag(char* str);

void file_flag(char** file, int size);
