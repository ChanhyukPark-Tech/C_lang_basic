#include <stdio.h>
#include <float.h>


int main(void){

    double max=FLT_MIN , min=FLT_MAX , sum=0.0 , input;
    int count = 0;  // this is important

    while(scanf("%lf" , &input) == 1){

        if(input < 0 || input > 100){
            continue;
        }
        
        if(input > max){
            max = input;
        }
        if(input < min){
            min = input;
        }
        sum += input;

        
        count ++;
    }

    if(count > 0){
        printf("min = %lf , max = %lf , average = %lf" ,min,max,sum/(double)count);
    } else{
        printf("No Input");
    }

    return 0;
    
}