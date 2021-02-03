#include <stdio.h>
#include <float.h>
int main(){

    // round-off errors (ex1)

    // float a, b ;
    // a = 1.0E20f + 1.0f;
    // b = a - 1.0E20f;
    // printf("%f\n" , b);

    // round- off errors (ex2)

    // float a = 0.0f;
    // for(int i = 0 ; i < 100 ; i++){
    // a =  a + 0.01f;
    // } 
    // printf("%f" , a);


    //voerflow
    // float max = 3.4028e+38F;
    // printf("%f\n",max);
    // max = max * 100.0f;
    // printf("%f",  max );


    // underflow

    float a = 1.40129e-45f;
    printf("%e\n", a);
    a = a / 100.0f;
    printf("%e\n",a);



    return 0 ;

}