//
// Created by Marcel Ghisi on 26/02/22.
//

#include "../shell.h"
#include "stdlib.h"
#include "../parser.h"
#include "../my_split.h"
#include    <string.h>
#include    <unistd.h>
#include <dirent.h>
#include <stdbool.h>
#include  <errno.h>
#include "../nodes.h"
#include <limits.h>

#define PREVPWD = "/Users"
#define HOME = "/Users/marcel.ghisi"
#define ROOT "/"
#define PWD "/Users/marcel.ghisi/Projects"

char *join_path(char *pwd, char *to_join)
{

    size_t pwd_len                  = strlen(pwd);
    size_t join_len                 = strlen(to_join);
    /* + 2 for null char and separtor */
    size_t new_pwd_len              = pwd_len + join_len + 2;
    char *new_pwd                   = (char*)malloc( new_pwd_len * sizeof(char));

    strncpy(new_pwd, pwd, pwd_len);
    new_pwd[pwd_len]                = '/';
    new_pwd[pwd_len + 1]            = '\0';
    strncat(new_pwd, to_join, new_pwd_len);
    new_pwd[new_pwd_len - 1]        = '\0';

    return new_pwd;
}

static void cd_handle_home()
{
    const char* home_path = getenv("HOME");
    const char* pwd_path = getenv("PWD");
    int result = setenv("OLDPWD",pwd_path,1);
    chdir(home_path);
}

static void cd_handle_prevpwd()
{
    const char* old_path = getenv("OLDPWD");
    char cwd_for_old[PATH_MAX];
    getcwd(cwd_for_old, sizeof(cwd_for_old));
    chdir(old_path);
    setenv("OLDPWD",cwd_for_old,1);
}

bool dir_exists(char *path)
{
    DIR      *dir;

    if((dir = opendir(path)) == NULL)
    {
        printf("%s\n",strerror(errno));
        return false;
    }

    closedir(dir);
    return true;

}

static void cd_handle_change(char *new_pwd)
{
    char cwd_for_old[PATH_MAX];
    getcwd(cwd_for_old, sizeof(cwd_for_old));
    setenv("OLDPWD",cwd_for_old,1);
    chdir(new_pwd);
    char cwd[PATH_MAX];
    getcwd(cwd, sizeof(cwd));
    setenv("PWD",cwd,1);

    char t_cwd_for_old[PATH_MAX];
    getcwd(t_cwd_for_old, sizeof(t_cwd_for_old));
    setenv("PWD",t_cwd_for_old,1);

    const char* to_cwd = getenv("OLDPWD");
    setenv("OLDPWD",to_cwd,1);
}

int change_dir(struct node_s *root)
{
    char *new_pwd;
    char* argument = root->next_sibling->val.str;
    char *path = argument;

    if((strcmp(path, "-")) == 0)
    {
        cd_handle_prevpwd();
        return 0;
    }

    if((strcmp(path, "~")) == 0)
    {
        cd_handle_home();
        return 0;
    }

    new_pwd                   = path;

    if(dir_exists(new_pwd))
        cd_handle_change(new_pwd);

    free(new_pwd);
    return 1;
}