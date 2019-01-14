#include <stdio.h>

int main()
{
    /* code */
    float celsius, fahr;
    int step, max;

    celsius = 0;
    step = 1;
    max = 5;
    
    printf("________________\n");
    printf("|  Table head  |\n");
    printf("----------------\n");
    
    while(celsius <= max){
        fahr = celsius / (5.0 / 9.0) + 32;
        printf("| %4.2f \t %4.2f |\n", celsius, fahr);
        celsius += step;
    }
    
    printf("----------------\n");
    
    return 0;
}
