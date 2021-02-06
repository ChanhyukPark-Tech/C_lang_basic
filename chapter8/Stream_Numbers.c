#include <stdio.h>


int main(void){

    char str[255];
    int i,i2;
    double dou;

    scanf("%s %d %lf",str,&i,&dou);
    printf("%s %d %lf\n",str,i,dou);

    scanf("%s %d %d",str,&i,&i2);
    printf("%s %d %d\n",str,i,i2);
    
    char c;
    while((c = getchar()) != '\n'){
        putchar(c);
    }

    return 0;

}