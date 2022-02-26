//
// Created by Marcel Ghisi on 07/11/21.
//

#ifndef MY_BC_PY_NODES_H
#define MY_BC_PY_NODES_H


typedef struct Node_S{
    int number_a;
    int number_b;
    int result;
} Node;

//Add methods
Node* AddedNode_ctor(int na, int nb);
int AddedNode_validate(Node* node, char* error);
void AddedNode_calculate(Node* node);

//Subtracted methods
Node* SubtractedNode_ctor(int na, int nb);
int SubtractedNode_validate(Node* node, char* error);
void SubtractedNode_calculate(Node* node);

//Multiplication methods
Node* MultipliedNode_ctor(int na, int nb);
int MultipliedNode_validate(Node* node, char* error);
void MultipliedNode_calculate(Node* node);

//Dvision methods
Node* DividedNode_ctor(int na, int nb);
int DividedNode_validate(Node* node, char* error);
void DividedNode_calculate(Node* node);

//Module methods
Node* ModuleNode_ctor(int na, int nb);
int ModuleNode_validate(Node* node, char* error);
void ModuleNode_calculate(Node* node);


#endif //MY_BC_PY_NODES_H

