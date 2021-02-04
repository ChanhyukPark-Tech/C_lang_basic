#include <stdio.h>

int main(void){

    const char start_point = 'A';
    const char final_point = 'J';
    const int row_numbers = 10;

    for(int i = 0 ; i < row_numbers ; i++){
        for(int j=start_point; j < start_point + i+1; j++){
            printf("%c ",j);
        }
        printf("\n");

    }
}