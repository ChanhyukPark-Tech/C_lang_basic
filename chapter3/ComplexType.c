#include <stdio.h>
#include <complex.h>

int main(void){

    //double_imaginary i =3 ;
    double _Complex z = 1 + 2*I;

    z = 1 / z; 

    printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n" , creal(z) , cima(z));

    return 0;
    // not yet ...... developer make himself
    
}