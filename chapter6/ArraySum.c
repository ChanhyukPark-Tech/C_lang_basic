#include <stdio.h>

// #define SIZE 5

int main(void){

    const int SIZE = 5;

    int sum_arr[SIZE];
    int num = 0 , sum = 0;
    for(int i=0; i<SIZE; i++){
         scanf("%d",&num);
         sum_arr[i] = num;
    }

    for(int i=0; i<SIZE; i++){
        sum += sum_arr[i];
    }

    printf("your sum is %d" ,sum);

    return 0 ;

}