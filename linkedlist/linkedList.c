#include <stdio.h>

struct node{
    struct node *prev;
    struct node *next;
    void* data;
};

struct linkedList{
    struct node *head;
    struct node *tail;
    int size;

};

struct linkedList* init_list(){
    struct linkedList* new_list = malloc(sizeof(struct linkedList));
    new_list->size = 0;
    return new_list;
}

struct node* init_node(void* new_data){
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = new_data;
    return new_node;
}

void free_node(struct node* node){
    free(node->data);
    free(node);
}

//
void free_list(struct linkedList* list){

}

void print_list(struct linkedList* list){
    struct node* itt = list->head;
    while(itt){
        printf("%p \n", &(*itt));
        itt = itt->next;
    }
}


int add(struct linkedList *l, void* new_data){
    if(l->size == 0){
        l->head = init_node(new_data);
        l->tail = l->head;

    }
    else if(l->size == 1){
        l->tail = init_node(new_data);
        l->head->next = l->tail;
        l->tail->prev = l->head;
    }
    else{
        struct node* new_node = init_node(new_data);
        l->tail->next = new_node;
        new_node->prev = l->tail;
        l->tail = new_node;
    }

    l->size ++;
    return l->size;
}

void *get_head(struct linkedList *l){
    return l->head->data;
}

void *get_tail(struct linkedList *l){
    return l->tail->data;
}

void free_head(struct linkedList *l){
    free(l->head);
}