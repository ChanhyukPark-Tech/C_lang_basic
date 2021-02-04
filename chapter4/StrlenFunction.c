#include <stdio.h>
#include <string.h>

int main(void){
    
    char str1[100] = "Hello";
    char str2[] = "Hello";
    char str3[100] = "\0";
    char str4[100] = "\n";

    printf("%lu %zu\n" ,sizeof(str1),strlen(str1));
    printf("%lu %zu\n" ,sizeof(str2),strlen(str2));
    printf("%lu %zu\n" ,sizeof(str3),strlen(str3));
    printf("%lu %zu\n" ,sizeof(str4),strlen(str4));
    

    return 0 ;


    }