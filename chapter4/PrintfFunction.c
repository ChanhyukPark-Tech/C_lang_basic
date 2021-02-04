#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    double d = 3.1415926735897932386432153151515555555555522222222222;

    printf("%c\n" , 'A');
    printf("%s", "I love you\n"); // can use \n to right side
    printf("Even if there's a small chance , we owe \
this to everyoune who's not in this room to try\n ");

printf("\n");
printf("%d %i %i %i\n",1004,1234,INT_MAX,UINT_MAX); //note overflow
printf("%u %u %u\n" ,1024,-1,UINT_MAX);             //note overflow

printf("\n");
printf("%f %f %lf\n" , 3.141592f,d,d);
printf("%a %A\n",d,d);
printf("%e %E\n" ,d,d);

printf("\n");
printf("%g %g\n",123456.789,1234567.89);
printf("%G %G\n",123456.789,1234567.89);
printf("%g %g\n",0.00012345,0.000012345);
printf("%G %G\n",0.00012345,0.000012345);

printf("\n");
printf("%o\n",9);
printf("%p\n" ,&d);

printf("\n");
printf("%x %X\n", 11,11);
printf("%%\n",d);// note the warning d is ignored;

printf("\n");
printf("%9d\n",12345);
printf("%09d\n",12345);
printf("%.2f\n",3.141592);
printf("%.20f %.20lf\n",d,d);

printf("\n");
int n_printed = printf("Counting!\n");
printf("%u\n",n_printed);








return 0;


}