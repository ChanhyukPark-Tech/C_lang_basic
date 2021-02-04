#include <stdio.h>


int main(){

    int a = 1;
    int int_arr[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("%d %d %d \n", int_arr[0] ,int_arr[1],int_arr[2]);
    for(int i =0; i<10 ; i++){
        printf("%d" , int_arr[i]);
    }

    //printf("%d\n" , int_arr[100000]);  < ==== === =can't not use outof array index; 

    char c = 'a';
    char str1[10] = "Hello";
    char str2[10] = { 'H' , 'i'};


    printf("%c\n" , c);
    printf("%s\n",str1);
    printf("%s\n",str2);


    printf("%hhd %hhd %hhd %hhd",str1[0],str1[1],str1[2],str1[3]);
    // char str3[10] = "Hello,Worldadsad"  <===== array size is not enough;
    char str3[20] = "Hello , \0world.";

    printf("%s\n" , str3);

    for(int i = 0 ; i < 15 ; i++){
        printf("%c" , str3[i]);
    }


    return 0;

}