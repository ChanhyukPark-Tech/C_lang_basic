#include <stdio.h>

int main(void){
    int num = 0 , sum = 0 ;

    printf("Enter an integer (q to quit) : \n");
    scanf("%d" , &num);
    sum = num ;

    while(num != 'q'){
        printf("Enter next integer (q to quit) : ");
        scanf("%d" , &num);
        if(num != 'q'){
        sum += num;
        }
    }   

    printf("Sum = %d" , sum);
    


    return 0;

}