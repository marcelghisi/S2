#include "my_ls.h"

int my_strlen(char *str)
{
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}

char *my_strcat(char *dest, const char *src)
{
    char *ptr = dest + my_strlen(dest);
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

long long my_difftime(long long mill_sec1, long long mill_sec2)
{  // here is minus cuz we are putting most recent in the begining,
// most recent time has more milliseconds => the order is DESC order
    return mill_sec2 - mill_sec1;
}

int comp_tm(struct file_tm *file1, struct file_tm *file2)
{
    if ((file1->milliseconds) != (file2->milliseconds))
    {
        return my_difftime(file1->milliseconds, file2->milliseconds);
    }
    else
    {  // if they were modificated in one time, then sort in lexicographical
    // order
        return my_strcmp(file1->name, file2->name);
    }
}

void t_flag(char *str)
{
    struct file_tm *head = NULL;
    struct dirent *entry;
    struct stat statbuf;
    DIR *dir;
    dir = opendir(str);
    while ((entry = readdir(dir)) != NULL)
    {
        if (str[0] != '.')  // if not local dir, we construct absolute path to access stat about files inside it
        {
            char abs_path[50] = "";
            char slash[2] = "/";
            my_strcat(abs_path, str);
            my_strcat(abs_path, slash);
            my_strcat(abs_path, entry->d_name);
            lstat(abs_path, &statbuf);
        }
        else
        {
            lstat(entry->d_name, &statbuf);
        }
        long long mils = 0;
#if MY_LS_ENV == 'L'
        mils = statbuf.st_mtim.tv_sec*1000 + rounded;
#else
        mils = statbuf.st_mtimespec.tv_sec*1000 + lround(statbuf.st_mtimespec.tv_nsec/1.0e6);
#endif
        if (entry->d_name[0] != '.')
        {
            head = insert_tm(head, entry->d_name, mils);
        }
    }
    struct file_tm *current = head;
    while (current != NULL)
    {
        printf("%s  ", current->name);
        current = current->next;
    }
    printf("\n");
    struct file_tm *tofree;
    while (head != NULL)
    {
        tofree = head;
        head = head->next;
        free(tofree);
    }
    closedir(dir);
}
