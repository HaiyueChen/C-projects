#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){
    struct linkedList *l1;
    l1 = malloc(sizeof(struct linkedList));
    init_list(l1);

    printf("%d\n",get_head(l1));


    free_head(l1);
    free(l1);
    return 0;
}