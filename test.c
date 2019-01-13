#include <stdio.h>
#include <stdbool.h>

void next_line(char to[]);
int count_length(char charArray[]);

int main(){
    char charArray[100];
    for(int i = 0; i < 2; i++){
        next_line(charArray);
        int index = 0;
        
        int length = count_length(charArray);
        for(int j = 0; j < 5; j ++){
            putchar(charArray[j]);
        }
        
    }
    
    return 0;
}

int count_length(char charArray[]){
    int length = 0;
    while(charArray[length] != '\0'){
        length ++;
    }
    return length;

}

void next_line(char to[]){
    int character;
    int index = 0;
    while((character = getchar()) != EOF && character != '\r'){
            to[index] = character;
            //printf("%d", to[index]);
            index ++;
    }
    getchar();
    to[index] = '\0';

}