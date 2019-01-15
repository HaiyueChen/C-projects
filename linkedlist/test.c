#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(int argc, char const *argv[])
{
    /* code */
    int* a = malloc(3 * sizeof(int));
    free(a);
    return 0;
}
