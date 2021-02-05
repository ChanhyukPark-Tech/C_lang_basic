#include <stdio.h>


int main(void){

    for(int i=0 ; i< 10 ; i++){
        if( i == 5){
            continue;
        }

        if(i!=5)
// {
//     printf("%d",i)
// }      
   printf("%d", i );
    }
    return 0;

}