#include <stdio.h>

int main(void){

    int num,sum = 0;
    int status = 0;
    
    printf("Enter an integer (q to quit)  ");
    status = scanf("%d", &num);

    while(status){

        sum += num;

        printf("Enter next integer (q to quit) : ");
        status = scanf("%d" , &num);

    }

    printf("Sum = %d\n" ,sum );

    return 0 ;
    
}