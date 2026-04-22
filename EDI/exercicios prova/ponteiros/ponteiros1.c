/*
1. Escreva uma função chamada troca(), que receba dois ponteiros para inteiros
e troca os valores entre eles.
a.
Exemplo de chamada: troca(&a, &b)
*/

#include <stdio.h>


void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main(){

    int a;
    int b;

    printf("digite o valor 1: ");
    scanf("%d", &a);
    printf("digite o valor 2: ");
    scanf("%d", &b);
    printf("valor antes da troca\n1 - %d\n2 - %d\n", a, b);

    troca(&a,&b);

    printf("valor depois da troca\n1 - %d\n2 - %d\n", a, b);

    return 0;


}