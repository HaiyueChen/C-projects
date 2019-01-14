#include <stdio.h>
#include <stdbool.h>

void special_counters(void);
void replace(void);
void explicit(void);
long word_count(void);
void one_p_line(void);

int main()
{
    /* code */

    //special_counters();
    //replace();
    //explicit();
    
    /*
    long words = word_count();
    printf("\n%ld\n", words);
    */
    one_p_line();

    return 0;
}

void special_counters(){
    int character;
    long blank_count = 0;
    long tab_count = 0;
    long nl_count = 0;
    while((character = getchar()) != EOF){
        if(character == ' '){
            blank_count ++;
        
        }else if(character == '\t'){
            tab_count ++;
        }
        else if(character == '\n'){
            nl_count ++;
        }
        
    } 
    printf("Blanks    : %4ld\n", blank_count);
    printf("Tabs      : %4ld\n", tab_count);
    printf("New lines : %4ld\n", nl_count);
    return;
}

void replace(void){
    int character;
    _Bool blank_seen = false;
    while((character = getchar()) != EOF){
        if(character == ' '){
            if(!blank_seen){
                putchar(character);
                blank_seen = true;
            }
        }
        else{
            putchar(character);
            blank_seen = false;
        }

    }

}

void explicit(){
    int character;
    while((character = getchar()) != EOF){
        if(character == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if(character == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if(character == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(character);
        }

    }
}

long word_count(){
    _Bool in_word = false;
    long counter = 0;
    int character;

    while((character = getchar()) != EOF){
        if(character == ' ' || character == '\t' || character == '\n' || character == '\r'){
            in_word = false;
        }
        else{
            if(!in_word){
                counter++;
                printf("%d\n", character);
                in_word = true;
            }
        }

    }

    return counter;
}

void one_p_line(){
    _Bool in_word = true;
    int character;

    while((character = getchar()) != EOF){
        if(character == ' ' || character == '\r' || character == '\n' || character == '\t'){
            if(in_word){
                putchar('\n');
                in_word = false;
            }
        }
        else{
            in_word = true;
            putchar(character);

        }


    }


}