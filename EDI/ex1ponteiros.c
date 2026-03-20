#include <stdio.h>

int main(){
    int a = 5, *b;
    printf("valor de a: %d\n", a);
    b = &a; //b recebe o endereço de a 
    *b = 1; //altera o valor apontado por b
    printf("valor de a: %d\n", a);
    return 0;
}