#include <stdio.h>
#include <limits.h>

int main(void) {


    unsigned int u_max = UINT_MAX ;

    // i to binary representation
    char buffer[33];
    _itoa(u_max , buffer , 2); // can not use in linux not standard

    // print decimal and binary 
    printf("decimal : %u\n" , u_max);
    printf("binary : %s\n" , buffer);

    printf("%u" , u_max);
    return 0;


 
}