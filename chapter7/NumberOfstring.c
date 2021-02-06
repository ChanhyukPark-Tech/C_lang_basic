#include <stdio.h>
#include <ctype.h>

#define finish_point '.'


int main(void){
    int character = 0 , word = 0 ,line = 1 ;

    printf("Enter text : \n");

    
    

    char ch = getchar();

    while(ch != finish_point)
    {
        

    if(ch == '\n'){
        line++;
    }else if(ch == ' '){
        word++;
    }else{
        character++;
    }

    ch = getchar();

    }


    printf("Characters = %u Words = %u Lines = %u" ,character, word,line);

    return 0;





}