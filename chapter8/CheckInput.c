#include <stdio.h>
long get_long(void);

int main(void){
    long number;
    while(1){

    printf("Please input a integer between 1 and 100.\n");
    number = get_long(); 
    
    if(number > 1 && number < 100){
        printf("OK. THank you. \n");
        break;
    }else{
        printf("Wrong input,please try again\n");
    }
    
    }
    return 0;
}

long get_long(void)
{
    {
long input;
    char c ;

    while(scanf("%ld",&input) != 1 ){

        printf("Yore input - ");

        while((c=getchar()) != '\n'){
            putchar(c);
        }

        printf("is not an integer\n");
    }

    printf("Your input %ld is an integer. Thank you \n", input);

    return input;
}
}