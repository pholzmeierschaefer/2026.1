/*

3.Crie uma função somaImpares(), que receba dois inteiros (inicio, fim) e um
ponteiro. A função deve somar os ímpares do intervalo.
a.
O código ao lado deve imprimir 21.

somaImpares(5, 9, &soma);
printf("Soma dos impares: %d", soma);

*/

#include <stdio.h>

void somaImpares(int inicio, int fim, int *p1){
    *p1 = 0;
    for(int i = inicio; i <= fim; i++){
        if(i%2 != 0){
            *p1 += i;
        }
    }
    
}


int main(){
    int i;
    int f;
    int soma;

    printf("digite o valor de inicio: ");
    scanf("%d", &i);
    printf("digite o valor de fim: ");
    scanf("%d", &f);
    

    somaImpares(i, f, &soma);

    printf("soma dos impares: %d\n", soma);
    return 0;
}