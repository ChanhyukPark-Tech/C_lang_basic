#include <stdio.h>

int main(void){

    int int_arr[30];
    int *int_ptr = NULL;
    int_ptr = (int*)malloc(sizeof(int) * 30) ;

    int a = sizeof(int);

    printf("Size of array = %lu bytes\n" , sizeof(int_arr));
    printf("Size of pointer = %lu bytes \n" , sizeof(int_ptr));
    printf("size of int %d" , a );
    
    return 0 ;


}