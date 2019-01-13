#include <stdio.h>
#include <stdbool.h>

#define LINE_LENGTH 1000

void get_longest_line(char to[]);
void copy_char_array(char from[], char to[]);
void next_line(char storage[]);
int count_length(char charArray[]);


int main(){
    char longest[LINE_LENGTH];
    get_longest_line(longest);
    
    printf("%s \n", longest);
    /*
    int index = 0;
    while(longest[index] != '\0'){
        putchar(longest[index]);
        index ++;
    }
    putchar('\n');
    */
    return 0;
}

void get_longest_line(char storage[]){
    char new[LINE_LENGTH];
    char current[LINE_LENGTH];

    int new_length = 0;
    int current_length = 0;

    next_line(new);
    while(new[0] != '\0'){
        new_length = count_length(new);
        if(new_length > current_length){
            copy_char_array(new, current);
            current_length = new_length;
        }
        next_line(new);
    }
    copy_char_array(current, storage);

}

void copy_char_array(char from[], char to[]){
    int i = 0;

    while(from[i] != '\0'){
        to[i] = from[i];
        i ++;
    }
    to[i] = '\0';

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