#include <stdio.h>

int main(void){

    char c ;

    while((c = getchar()) != '.'){

        switch(c){
        case 'A' : 
        case 'a' :{
            printf("apple you like");
            break;
        }
        case 'B' :a
        case 'b' :{
            printf("banana");
            break;
        }
        case 'C' : 
        case 'c' :{
            printf("candy");
            break;
        }
        default : {
            printf("i dont know what you like");
        }
        }

        while(getchar() != '\n'){
            continue;
        }
    }

    return 0;

}