#include <stdio.h>


int main(void){

    int seconds = 0 , minutes = 0 , hours = 0;
        printf("Input seconds : ");
        scanf("%d" , &seconds);

        
    while(seconds >=0 ){
        printf("Input seconds : ");
        scanf("%d" , &seconds);

        minutes = seconds / 60;
        seconds %= 60;

        hours = minutes /60;
        minutes %= 60;

        printf("%d hours , %d minutes , %d seconds ",hours,minutes,seconds);
    }

        printf("Good bye");

        return 0 ;

}