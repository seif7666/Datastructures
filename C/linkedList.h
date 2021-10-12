#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <stdlib.h>
typedef struct LinkedList{
    Node* head;
    Node* tail;
    int size;
}LinkedList;

void initList(LinkedList* list);
int size(LinkedList* list);
void add(LinkedList* list, void* value);
Node* getNode(LinkedList* list, int index);
void deleteElem(LinkedList* list, int index);


#endif