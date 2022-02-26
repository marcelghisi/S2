//
// Created by Marcel Ghisi on 07/11/21.
//
#include "nodes.h"
#include <stdlib.h>
#include <string.h>

Node* AddedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_b = nb;
    return  node;
}

int AddedNode_validate(Node* node, char* error){
    //No exceptions
    return 1;
}

void AddedNode_calculate(Node* node){
    node->result = node->number_a + node->number_b;
}

Node* SubtractedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_b = nb;
    return  node;
}

int SubtractedNode_validate(Node* node, char* error){
    //No exceptions
    return 1;
}

void SubtractedNode_calculate(Node* node){
    node->result = node->number_a - node->number_b;
}

Node* MultipliedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_b = nb;
    return  node;
}

int MultipliedNode_validate(Node* node, char* error){
    //No exceptions
    return 1;
}

void MultipliedNode_calculate(Node* node){
    node->result = node->number_a * node->number_b;
}

Node* DividedNode_ctor(int na, int nb){
    //Euclidean division as a and b are integers the truncate is the q
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_b = nb;
    return  node;
}

int DividedNode_validate(Node* node, char* error){
    if (node->number_b == 0){
        strcpy(error,"can not divide by zero\ncalc> ");
        return 0;
    }
    return 1;
}

void DividedNode_calculate(Node* node){
    node->result = node->number_a / node->number_b;
}

Node* ModuleNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_b = nb;
    return  node;
}

int ModuleNode_validate(Node* node, char* error){
    if (node->number_b == 0){
        strcpy(error,"module by zero\ncalc> ");
        return 0;
    }
    return 1;
}

void ModuleNode_calculate(Node* node){
    node->result = node->number_a % node->number_b;
}