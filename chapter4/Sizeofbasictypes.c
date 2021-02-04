#include <stdio.h>

int main(){

    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);

    size_t int_size4 = sizeof(a);
    size_t float_size = sizeof(float);

    printf("Size of int type is %u bytes.\n" , int_size1);
    printf("Size of int type is %u bytes.\n" , int_size2);
    printf("Size of int type is %u bytes.\n" , int_size3);
    printf("Size of int type is %zu bytes.\n" , int_size4);
    printf("Size of float type is %zu bytes.\n" , float_size);

    

    return 0 ;

}