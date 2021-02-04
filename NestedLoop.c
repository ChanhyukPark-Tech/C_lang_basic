#include <stdio.h>

// int main(void){
//     char start;
//     int count ,final;
//     start = 'A';
//     final = 11;
//     count = 5;

// for(int i=0; i<count ; i++){

//     for(char c = start ; c < start + final ; c++){
//         printf("%c ",c);
//     }
//     printf("\n");
// }

//     return 0;

// }

int main(){

    int r; // row loop
    int c; // character loop
    const int NUM_ROWS = 5;
    const char FIRST_CHAR = 'A';
    const char LAST_CHAR = 'K';


    for(r=0;r<NUM_ROWS;r++){        //outer row loop
        for(c = FIRST_CHAR; c <=LAST_CHAR; c++){
            printf("%c ",c);

        }
        printf("\n");

    }
}