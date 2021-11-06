#include "my_ls.h"

int my_strcmp(const char *str1, const char *str2)
{
    while (*str1)
    {
        if (*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    return *(const unsigned char *)str1 - *(const unsigned char *)str2;
}

char* create_path(char* path,char* file_name){
        
    char* new_path = (char*)malloc(PATH_MAX * sizeof(char));

    if (path == 0){
        if (getcwd(new_path, sizeof(new_path)) == NULL) {
            perror("getcwd() error");
            return NULL;
        }
    } else {
        new_path = path;
    }


    char *file = malloc(250);
    memset(file, 0, 250);
    strcat(file,new_path);
    strcat(file,"/");
    strcat(file,file_name);
    return file;
}

struct file_tm *insert(char* path,struct file_tm *head, struct dirent *entry)
{
    struct stat* current_stat = (struct stat*)malloc(sizeof (struct stat));
    char *name = malloc(250);
    memset(name, 0, 250);
    strcat(name,entry->d_name);

    char* file_path = create_path(path,name);
    struct file_tm *ptr = malloc(sizeof(struct file_tm));

    if (stat(file_path, current_stat) == 0)
    {
#if MY_LS_ENV == 'L'
        ptr->milliseconds = current_stat->st_mtim.tv_sec*1000 + rounded;
#else
        ptr->milliseconds = current_stat->st_mtimespec.tv_sec*1000 + lround(current_stat->st_mtimespec.tv_nsec/1.0e6);
#endif

    }
    else
    {
        printf("Unable to get file properties.\n");
        printf("Please check whether '%s' file exists.\n", file_path);
    }


    ptr->name = entry->d_name;
    ptr->next = NULL;
    struct file_tm **temp = &head;
    while (*temp != NULL && my_strcmp(ptr->name, (*temp)->name) >= 0)
    {
        temp = &(*temp)->next;
    }
    ptr->next = *temp;
    *temp = ptr;
    return head;
}

void a_flag(char *str)
{
    struct file_tm *head = NULL;
    struct dirent *entry;
    DIR *dir;
    dir = opendir(str);
    while ((entry = readdir(dir)) != NULL)
    {
        head = insert(str, head, entry);
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
