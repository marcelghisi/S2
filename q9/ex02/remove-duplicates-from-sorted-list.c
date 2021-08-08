#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- remove_duplicates_from_sorted_list
**
** @param {listnode*} param_1
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


listnode* remove_duplicates_from_sorted_list(listnode* param_1)
{

    listnode* next = NULL;

    if (param_1->next != NULL){

            if (param_1->next->val == param_1->val){
                if (param_1->next->next != NULL){
                    param_1->next = remove_duplicates_from_sorted_list(param_1->next->next);
                } else {
                    param_1->next = NULL;
                }
            } else {
                param_1->next = remove_duplicates_from_sorted_list(param_1->next);
            }   
    }
    if (param_1->next != NULL){
        if (param_1->val == param_1->next->val){
            param_1 = param_1->next;
        }
    }
    return param_1;
}
int main(){

    listnode* node5= (listnode*)malloc(sizeof(listnode));
    node5->val = 3;
    node5->next = NULL;

    listnode* node4= (listnode*)malloc(sizeof(listnode));
    node4->val = 2;
    node4->next = NULL;

    listnode* node3= (listnode*)malloc(sizeof(listnode));
    node3->val = 1;
    node3->next = node4;

    listnode* node2= (listnode*)malloc(sizeof(listnode));
    node2->val = 1;
    node2->next = node3;

    listnode* node1= (listnode*)malloc(sizeof(listnode));
    node1->val = 1;
    node1->next = node2;

    listnode* ret = remove_duplicates_from_sorted_list(node1);

    return 0;
}