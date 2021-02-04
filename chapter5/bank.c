#include <stdio.h>

int main(){
    int year = 0; 
    double initial_money = 0.0 , final_money = 0.0  , rate = 0.0;
    printf("Type your initial value");
    scanf("%lf" , &initial_money);

    printf("Type your final_money");
    scanf("%lf" , &final_money);

    
    printf("Type your rate");
    scanf("%lf" , &rate); 

    while(initial_money < final_money){
        initial_money = initial_money * (1 + rate * 0.01);
        year ++;
        printf("Year %d , fund : %lf",year,initial_money);
    }


    printf("take %d years" , year);

    return 0 ;



}
