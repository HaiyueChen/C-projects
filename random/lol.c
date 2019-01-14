#include <stdio.h> 
#include <stdlib.h>
#include <sys/types.h> 
  
int main() 
{ 
    while(1){
        int *pid = fork();
        if(pid == 0){
            continue;
        }
        forkfork();
    }
        
    return 0; 
}


void forkfork(){
    int i = 2;
        while(1){
            i = i*i;
        }
}