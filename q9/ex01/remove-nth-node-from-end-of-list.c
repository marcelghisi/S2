#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- remove_nth_node_from_end_of_list
**
** @param {listnode*} param_1
** @param {int} param_2
**
** @return {listnode*}
**
*/
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


int count_items(listnode* param_1){
    int count = 0;
    listnode* current = param_1;
    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2)
{

    int size = count_items(param_1);
    int count = 0;

    listnode* current = param_1;
    listnode* previus = NULL;
    listnode* next = NULL;

    if (param_2 == size){
        listnode* previus = param_1;
        current = param_1->next;
        free(previus);
        return current;
    }


    while(current != NULL)
    {
        if(count == (size-param_2)){
            previus->next = current->next;
            free(current);
            break;
        }
        previus = current;
        count++;
        current = current->next;
    }
    return param_1;
}

int main(){

    //listnode* node5= (listnode*)malloc(sizeof(listnode));
    //node5->val = 1;
    //node5->next = NULL;

    //listnode* node4= (listnode*)malloc(sizeof(listnode));
    ///node4->val = 2;
    //node4->next = node5;

    //listnode* node3= (listnode*)malloc(sizeof(listnode));
    //node3->val = 3;
    //node3->next = node4;

    listnode* node2= (listnode*)malloc(sizeof(listnode));
    node2->val = 2;
    node2->next = NULL;

    listnode* node1= (listnode*)malloc(sizeof(listnode));
    node1->val = 1;
    node1->next = node2;

    listnode* ret = remove_nth_node_from_end_of_list(node1,2);

    return 0;
}