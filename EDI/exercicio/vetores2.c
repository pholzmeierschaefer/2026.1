#include <stdio.h>

void MaiorMenor(int vetor[], int tam){
    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i < tam; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }

        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    printf("maior resultado: %d\n", maior);
    printf("menor resultado: %d", menor);
}

int main(){
    int num [5];
    int tam = 0;

    printf("digite 5 numeros: \n");
    for(int i=0; i < 5; i++){
       
        scanf("%d", &num[i]); //coloca no vetor
        tam ++;
    }

    MaiorMenor(num, tam);


}