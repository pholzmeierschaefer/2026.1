/*Faça uma função que receba um vetor e o seu tamanho como parâmetro e
imprima o maior e o menor elemento do vetor.
a.
Esta função é do tipo void pois não retorna nenhum valor*/

#include <stdio.h>

void MaiorMenor(int vetor[], int tam){
    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i<tam; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }

        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);
}

int main(){


    int tam;

    printf("digite o tamanho do vetor: \n");
    scanf("%d", &tam);

    int vetor[tam];

    printf("digite %d valores para o vetor: \n", tam);
    for(int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }

    MaiorMenor(vetor, tam);
    return 0;
}