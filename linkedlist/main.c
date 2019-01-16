#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){
    struct linkedList *l1 = init_list(l1);
    /*
    int* test_a = calloc(4, sizeof(int));
    for(int i = 0; i < 4; i++){
        test_a[i] = i + 1;
    }
    */
    int* ptr_array[4];

    for(int i = 0; i < 4; i++){
        ptr_array[i] = (int*) malloc(sizeof(int));
        *ptr_array[i] = i + 1;
    }

    

    add(l1, (void*) ptr_array[0]);
    add(l1, (void*) ptr_array[1]);
    add(l1, (void*) ptr_array[2]);
    add(l1, (void*) ptr_array[3]);
    //free_node(l1->head);
    print_list(l1);
    rm_node(l1, 3);
    putchar('\n');
    print_list(l1);

    free_list(l1);
    
    //add(l1, (void*) test_a + 1);
    //add(l1, (void*) test_a + 2);
    //add(l1, (void*) test_a + 3);

    //printf("%d\n", *(int *)get_head(l1));
    //printf("%d\n",*(int *)get_tail(l1));
    //free_list(l1);
    //print_list(l1);
    return 0;
}