//
// Created by Marcel Ghisi on 06/02/22.
//

#ifndef MY_ZSH_MEDIUM_SHELL_H
#define MY_ZSH_MEDIUM_SHELL_H

#define BUFF_SIZE 10
#define READLINE_READ_SIZE 2000

void prompt_main_line(void);
void prompt_sub_line(void);

char* read_cmd(int fd);

void initsh(void);

/* shell builtin utilities */
int dump(char *argument);

int set_environment(char *argument);

int unset_environment(char *argument);

int my_exit(char *argument);

/* struct for builtin utilities */
struct builtin_s
{
    char *name;    /* utility name */
    int (*func)(char *argument); /* function to call to execute the utility */
};

/* the list of builtin utilities */
extern struct builtin_s builtins[];

/* and their count */
extern int builtins_count;

#endif //MY_ZSH_MEDIUM_SHELL_H
