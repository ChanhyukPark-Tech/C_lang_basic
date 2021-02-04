#include <stdio.h>


int main(void){

char c = 'a';
char string[10]; // maximally 9 character + '/0' ( null character);

size_t char_size = sizeof(char);
size_t str_size = sizeof(string);

printf("%zu\n", char_size);
printf("%zu",str_size);

return 0 ;

}
