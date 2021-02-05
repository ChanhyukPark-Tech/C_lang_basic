#include <stdio.h>
#include <stdbool.h>


int main(){

    unsigned num ; 
    bool isPrime ;

    scanf("%u",&num);

    // for(int i=2; i<num;i++){
    //     if(num % i ==0){
    //         isPrime = false;
    //         break;
    //     }else{
    //         isPrime = true;
    //     }
    // }

    isPrime = true ; // this initialized is very important

    // for( int div = 2 ; div < num; div++ ){
    //     if(num % div ==0){
    //         isPrime = false;
    //     }
    // }

    for(int div = 2 ; (div * div) <= num; div ++){
        if(num % div == 0 ){
            isPrime = false;

            if(num == div* div){
                printf("%u is divisible by %u\n",num,div);
            }else{
                printf("%u is divisible by %u and %u\n",num,div,num/div);
            }
        }
    }

    if(isPrime){
        printf("%u is a prime number",num);
    }else{
        printf("%u is not a prime number",num);
    }
}