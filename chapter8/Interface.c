#include <stdio.h>

int main(){

    int count = 0;

    while(1){

        printf("Current count is %d .Contunue?(y/n) ", count);

        if(getchar() == 'n'){
            break;
        }

        while(getchar() != '\n'){
            continue;
        }
        count ++;
    }

    return 0;
    
}