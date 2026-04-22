/*

2. Crie uma função chamada maior(), que receba dois inteiros e um ponteiro
para um inteiro. A função deve armazenar o valor do maior no endereço do
ponteiro.
a.
Exemplo de chamada: maior(a, b, &c)
*/

#include <stdio.h>

void maior(int a, int b, int *c){

    if (a > b){
        *c = a;
    }

    else{
        *c = b;
    }

    

}

int main(){
    int a;
    int b;
    int c;

    printf("digite o valor 1: ");
    scanf("%d", &a);
    printf("digite o valor 2: ");
    scanf("%d", &b);
    

    maior(a, b, &c);

    printf("o maior valor eh: %d\n", c);

    return 0;

}