#include <stdio.h>
#include <limits.h>
int main(void){
    long long_max = LONG_MAX;
    char c = 65;
    short s = 200;
    unsigned int ui = 3000000000U ; 
    long l = 65537L ;
    long long ll = 9223372036854775808LL;
        // in 64 bit long is 8byte
    printf("char = %hhd , %d , %c\n", c,c,c);
    printf("short = %hhd , %hd ,%d\n",s,s,s);
    printf("unsigned int = %u,%d\n",ui,ui);
    // printf("long = %ld , %hc\n",l,l);
    // printf("long long = %lld,%ld\n",ll,ll);
    printf("%ld\n",sizeof(l));
    printf("%lld\n",sizeof(ll));
    printf("%ld" , long_max);
    return 0 ;

}