#include <stdio.h>

int main(void){
    char c ;
    int count;
    printf("Enter the letter of choice\n"); 
    printf("a . avengers            b. beep\n");
    printf("c . count               q. quit\n");
    scanf("%c" , &c);

    while(c != 'q'){
        char ch;
        while((ch = getchar()) != '\n'){
            continue;
        }
        switch(c){
        case 'a' : {
            printf("avengers is forever");
            break;
        }
        
        case 'b' : {
            printf("\a");
            break;
        }
        
        case 'c' : {
            printf("Type you want to count");
            scanf("%d",&count);
            for(int i=0; i<=count;i++ ){
                printf("%d\n",i);
            }
            break;
        }

        default : {
            printf("Finished");
        }
        }
        scanf("%c" , &c);
    }

    return 0;

    

}