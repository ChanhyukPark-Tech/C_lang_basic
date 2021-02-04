#include <stdio.h>

int main(void){

const int password = 337;
int num=0;

// while(password != num){

// printf("Enter secret code : \n");
// scanf("%d",&num);

// }

do
{
    printf("Enter secret code : \n");
    scanf("%d",&num);
} while (password != num);

printf("Good");

return 0;



}

