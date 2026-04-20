/*1. Crie um programa que lê 5 valores inteiros, armazena-os em um vetor e, em
seguida, mostre na tela os valores lidos.
*/

#include <stdio.h>

int main(){
    int vetor [5];
    int i;

    printf("digite 5 valores inteiros\n");
    for(i = 0; i < 5; i++){
        printf("valor %d\n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("valores inseridos:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
}