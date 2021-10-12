#include "linkedList.h"


void initList(LinkedList* list){
    list->head=(Node*)malloc(sizeof(Node));
    list->tail=(Node*)malloc(sizeof(Node));
    list->head->next= list->tail;
    list->size= 0;
}

int size(LinkedList* list){
    return list->size;
}
void add(LinkedList* list, void* value){
    Node* current= list->head;
    while(current->next != list->tail)
        current= current->next;
    Node* temp= (Node*)malloc(sizeof(Node*));
    temp->value= value;

    current->next= temp;
    temp->next= list->tail;
    list->size++;
}

Node* getNode(LinkedList* list, int index){
    if(index>=size(list))
        return 0;
    Node* current= list->head;
    int count= 0;
    while (count <= index){
        current= current->next;
        count++;
    }
    return current;
}
void deleteElem(LinkedList* list, int index){
    if(index < 0)//Error
        return;
    Node* previous= getNode(list,index-1);
    Node* required= previous->next;
    previous->next= required->next;
    free(required);
    list->size--;
}