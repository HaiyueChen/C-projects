#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){
    struct linkedList *l1;
    l1 = init_list(l1);
    int test_a[] = {1,2,3,4};
    add(l1, (void*) &test_a[0]);
    add(l1, (void*) &test_a[1]);

    printf("%d\n",*(int *)get_tail(l1));
    return 0;
}