//
// Created by Marcel Ghisi on 31/10/21.
//

#include "my_token.h"
#include <stdlib.h>

Token* add_token(Token *head,int value,TokenType type){

    Token *nextToken = (Token*)malloc(sizeof(Token));
    nextToken->next = NULL;
    nextToken->type =type;
    nextToken->value = value;

    if (head == NULL){
        head = nextToken;
    } else {
        Token *currentToken = head;

        while (currentToken->next != NULL){
            currentToken = currentToken->next;
        }

        currentToken->next = nextToken;
    }
    return head;
}
