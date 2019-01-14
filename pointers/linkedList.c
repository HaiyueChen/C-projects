#include <stdio.h>
#include "listNode.c"


struct linkedList{
    struct list_node *head;
    struct list_node *tail;
    int size;

};

void init_list(struct linkedList *l){
    l->head = malloc(sizeof(struct list_node));
    int test = 3;
    l->head->data = &test; 
    l->size = 0;

}

void free_head(struct linkedList *l){
    free(l->head);
}


int get_head(struct linkedList *l){
    return *l->head->data;

}