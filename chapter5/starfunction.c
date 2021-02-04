#include <stdio.h>

void draw(int n);  //ANSI function prototype declaration

int main(){

    int i = 5;
    char c = '#'; // 35;
    float f = 7.1f;

    draw(i);
    draw((int)c);
    draw((int)f);

    return 0 ;

}

void draw(int x){

    for(int i = 0; i <=x ; i++){
        printf("*");
    }
    printf("\n");
}