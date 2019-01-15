#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){
    //struct linkedList *l1 = init_list(l1);
    
    /*
    int* test_a = malloc(4 * sizeof(int));
    for(int i = 0; i < 4; i++){
        test_a[i] = i + 1;
    }
    int i3 = 3;

    add(l1, (void*) &i1);
    add(l1, (void*) &i2);
    add(l1, (void*) &i3);

    //printf("%d\n",*(int *)get_tail(l1));
    //free_list(l1);
    */
    int i2 = 2;
    int* i1 = malloc(sizeof(int));
    *i1 = 2;
    struct node* n = init_node(i1);
    free_node(n);
    //print_list(l1);
    return 0;
}