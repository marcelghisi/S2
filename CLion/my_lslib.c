//
//  main.c
//  my_ls
//
//  Created by Marcel Ghisi on 21/06/21.
//

#include "my_lslib.h"
//
//double round_c99(double x) {
//  return (x >= 0.0) ? floor(x + 0.5) : ceil(x - 0.5);
//}

t_linked_value *create_element_value(struct stat* current_stat,struct dirent *read){
    t_linked_value *current_value = (t_linked_value*)malloc(sizeof (t_linked_value));
    current_value->value = read;
#if MY_LS_ENV == 'L'
    current_value->tm = localtime(&current_stat->st_mtim.tv_sec);;
        current_value->file_info = current_stat;
        double rounded = lround(current_stat->st_mtim.tv_nsec/1.0e6);
        current_value->milliseconds = current_stat->st_mtim.tv_sec*1000 + rounded;
#else
    current_value->tm = localtime(&current_stat->st_mtimespec.tv_sec);;
    current_value->file_info = current_stat;
    current_value->milliseconds = current_stat->st_mtimespec.tv_sec*1000 + lround(current_stat->st_mtimespec.tv_nsec/1.0e6);
#endif

    return current_value;
}

t_linked_list_dir* add_element(char* path,t_linked_list_dir *ptr, struct dirent *read)
{
    t_linked_list_dir *newElem;
    if (!(newElem = malloc(sizeof(t_linked_list_dir))))
        return newElem;
    struct stat* current_stat = (struct stat*)malloc(sizeof (struct stat));
    char* file_path = create_path(path,read->d_name);
    if (stat(file_path, current_stat) == 0) {
        t_linked_value *current_value = create_element_value(current_stat,read);
        newElem->value = current_value;
        newElem->next = ptr;
    } else {
        printf("Unable to get file properties.\n");
        printf("Please check whether '%s' file exists.\n", read->d_name);
    }
    return newElem;
}

char* create_path(char* path,char* file_name){
    char *file = malloc(250);
    memset(file, 0, 250);
    strcat(file,path);
    strcat(file,"/");
    strcat(file,file_name);
    return file;
}

t_linked_list_dir* create_list(char* path,DIR *dir,t_flag flags){
    t_linked_list_dir *current = malloc(sizeof (t_linked_list_dir));
    current->value = NULL;
    current->next = NULL;
    struct dirent *read;
    while((read = readdir(dir))){
        char* name = read->d_name;
        if (*name == '.' && flags.flag_a == false)
            continue;
        if (current->value == NULL){
            struct stat *current_stat = (struct stat*)malloc(sizeof (struct stat));
            char *name = malloc(250);
            memset(name, 0, 250);
            strcat(name,read->d_name);
            char* file_path = create_path(path,name);
            if (stat(file_path, current_stat) == 0)
            {
                t_linked_value *current_value = create_element_value(current_stat,read);
                current->value = current_value;
            }
            else
            {
                printf("Unable to get file properties.\n");
                printf("Please check whether '%s' file exists.\n", read->d_name);
            }
        } else {
            current = add_element(path,current,read);
        }
    }
    if (flags.flag_t == true){
        sort_time_stamp(current);
    } else {
        sort_names(current);
    }
    return current;
}

void swap(t_linked_list_dir *a, t_linked_list_dir *b)
{
    t_linked_value *temp = a->value;
    a->value = b->value;
    b->value = temp;
}

void sort_time_stamp(t_linked_list_dir *head)
{
    if (head == NULL)
        return;
    t_linked_list_dir *current = head;
    t_linked_list_dir *index = NULL;
    while (current != NULL)
    {
        index = current->next;
        while (index != NULL)
        {
            if (index->value->milliseconds > current->value->milliseconds) {
                swap(current, index);
            }
            index = index->next;
        }
        current = current->next;
    }
}

void sort_names(t_linked_list_dir *start)
{
    int swapped;
    t_linked_list_dir *ptr1;
    t_linked_list_dir *lptr = NULL;
    if (start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = start;
        while (ptr1->next != lptr)
        {
            if (strcmp(ptr1->value->value->d_name, ptr1->next->value->value->d_name) > 0)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

int check_divisor(int file_size,int divider){
    int check = file_size;
    if (check < divider) return 1;
    while(check % divider != 0){
        check--;
    }
    return check/divider;
}

int get_lenght_bigger_file_name(t_linked_list_dir *list){
    t_linked_list_dir *current = list;
    unsigned long  bigger_file_name_lenght = 0;
    while (current){
        if (strlen(current->value->value->d_name) > bigger_file_name_lenght) {
            bigger_file_name_lenght = strlen(current->value->value->d_name);
        }
        current = current->next;
    }
    return bigger_file_name_lenght;
}

int get_list_size(t_linked_list_dir *list){
    int count = 0;
    t_linked_list_dir *current = list;
    while (current){
        count++;
        current = current->next;
    }
    return  count;
}


int create_column_size(t_linked_list_dir *list){

    int start_lenght = 8;

    int big_length = get_lenght_bigger_file_name(list);

    if (big_length >= 8){
        start_lenght = start_lenght * (check_divisor(big_length,8) +1);
    }
    int size = start_lenght;

    return size;
}

char* create_column(char* word, int size){
    int offset = size+1;
    char* column_name = malloc(offset);
    memset(column_name, ' ', offset);
    column_name[offset-1] = '\0';
    char* save = column_name;
    while(*word != 0){
        *column_name = *word;
        word++;
        column_name++;
    }
    return save;
}

int get_max_column(int column_size,int number_of_files,int big_length){

    int size = 10;

    if (number_of_files <= 10){
        return size;
    }

    if (column_size > 8){
        size = 8;
    }

    if (column_size > 30){
        size = 5;
    }
    return size;
}

t_report* create_report(t_linked_list_dir *list){

    int big_length = get_lenght_bigger_file_name(list);
    int number_of_files = get_list_size(list);
    int column_size = create_column_size(list);
    int max_columns = get_max_column(column_size,number_of_files,big_length);

    int line_size = (column_size * max_columns);

    int sum_line = 1;
    if ((column_size*number_of_files) < line_size){
        sum_line = 0;
    }
    int number_of_lines = (check_divisor(number_of_files,max_columns)) + sum_line;
    char** report = (char**)malloc(number_of_lines * sizeof (char*));
    char* line;

    t_linked_list_dir *current = list;
    int count_columns_in_line = 0;
    int current_line = 0;
    int lines_created = 0;
    while (current){
        if (count_columns_in_line == 0 && lines_created == 0){
            line = (char*) malloc(line_size +1);
            memset(line, 0, line_size + 1);

        } else {
            line = report[current_line];
        }

        char* column = create_column(current->value->value->d_name,column_size);
        strcat(line,column);
        report[current_line] = line;

        if (current_line == number_of_lines-1){
            count_columns_in_line++;
            current_line= 0;
            lines_created = 1;
        } else {
            current_line ++;
        }
        current = current->next;
    }
    t_report *rep = (t_report*) malloc(sizeof (t_report));
    rep->report = report;
    rep->size = number_of_lines;
    return  rep;
}



void print_report(t_report* report){
    for (int i = 0; i < report->size; ++i) {
        char* line = report->report[i];
        printf("%s\n", line);
    }
}
void print_names(t_linked_list_dir *list){

    int start_lenght = 8;
    int big_length = get_lenght_bigger_file_name(list);

    if (big_length >= 8){
        start_lenght = start_lenght * (check_divisor(big_length,8) +1);
    }
    int size = start_lenght;

    t_linked_list_dir *current = list;
    while (current){
        printf("%s", create_column(current->value->value->d_name,size));
        current = current->next;
    }
    printf("%c",'\n');
    //printf("%c",'\n');
}

t_flag read_flags(int argc,const char **argv){
    t_flag* new_flag =  (t_flag*) malloc(sizeof(t_flag));
    char **paths = (char**)malloc(argc * sizeof (char*));
    int path_count = 0;

    for (int i = 1; i < argc; i++){
        char* current_word = (char*)argv[i];
        if (*current_word == '-'){
            current_word++;
            while(*current_word){
                if(*current_word == '-'){
                    break;
                }
                if(*current_word == ' '){
                    break;
                }
                if(*current_word == 'a'){
                    new_flag->flag_a = true;
                }
                if(*current_word == 't'){
                    new_flag->flag_t = true;
                }

                current_word++;
            }
        } else {
            char* new_path = malloc(250);
            memset(new_path, 0, 250);
            char* save_path = new_path;
            while(*current_word){
                if(*current_word == ' '){
                    break;
                }
                *new_path = *current_word;
                current_word++;
                new_path++;
            }
            paths[path_count] = save_path;
            path_count++;
        }
    }
    new_flag->paths = paths;
    new_flag->size_path = path_count;
    return *new_flag;

}

int my_ls(t_flag flags,char* path){

    DIR *dir;
    if ((dir = opendir(path)) == NULL){
        printf("Can not open %s!\n",path);
        return 0;
    }
    t_linked_list_dir *list = create_list(path,dir,flags);

    t_report* report = create_report(list);

    print_report(report);
    //print_names(list);

    closedir(dir);

    return 0;

};


