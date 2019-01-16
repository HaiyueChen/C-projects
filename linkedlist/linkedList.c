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
    struct linkedList* new_list = (struct linkedList*) calloc(1, sizeof(struct linkedList));
    new_list->size = 0;
    new_list->head = NULL;
    new_list->tail = NULL;
    return new_list;
}

struct node* init_node(void* new_data){
    struct node* new_node = (struct node*) calloc(1, sizeof(struct node));

    new_node->data = new_data;

    return new_node;
}

void free_node(struct node* node){
    free(node->data);
    free(node);
}

//
void free_list(struct linkedList* list){
    if(!list->head){
        free(list);
        return;
    }
    struct node* itt = list->head;
    struct node* current = NULL;

    while(itt){
        current = itt;
        itt = itt->next;
        free_node(current);
    }
    free(list);
}

void print_list(struct linkedList* list){
    struct node* itt = list->head;
    while(itt){
        printf("%d ", *(int*)itt->data);
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

struct node* get(struct linkedList* list, int index){
    if(index < 0 || index > list->size - 1){
        return NULL;
    }
    else{
        struct node* itt = list->head;
        for(int i = 0; i < index; i++){
            itt = itt->next;
        }
        return itt;
    }

}

int rm_node(struct linkedList* list, int index){
    if(index < 0 || index > list->size - 1){
        return 0;
    }
    else{
        struct node* itt = list->head;
        
        for(int i = 0; i < index; i++){
            itt = itt->next;
        }
        

        if(itt->prev){
            itt->prev->next = itt->next;
        }
        else{
            list->head = itt->next;
        }

        if(itt->next){
            itt->next->prev = itt->prev;
        }
        else{
            list->tail = itt->prev;
        }

        free_node(itt);

        list->size --;
        return 1;
    }
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