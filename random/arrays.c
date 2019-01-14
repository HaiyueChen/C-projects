#include <stdio.h>
#include <stdbool.h>

void digit_counter(void);

int main()
{
    /* code */
    digit_counter();

    return 0;
}

void digit_counter(){
    
    int character;
    int other = 0;
    int counter_array[10];

    for(int i = 0; i < 10; i++){
        counter_array[i] = 0;
    }

    while((character = getchar()) != EOF){
        if('0' <= character && character <= '9'){
            counter_array[character - '0'] ++;
        }
        else{
            if(character != '\n' 
            && character != '\r' 
            && character != '\t' 
            && character != ' '){
                other++;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("Digit %1d : %3d\n", i, counter_array[i]);
    }

    printf("Other   : %3d\n", other);
}