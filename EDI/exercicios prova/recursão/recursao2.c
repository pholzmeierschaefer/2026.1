/*
2.
Implemente uma função recursiva que calcule o somatório dos elementos de um vetor passado por parâmetro.

somaV(v,n) (
                se n == 0 entao v[0]                    caso base
                caso contrario v[n] + somaV(v, n-1)     caso recusivo
)

*/

#include <stdio.h>

int somaV(int v[], int n){

    if(n == 0){
         return v[0];
    }
    else{
        return v[n] + somaV(v, n-1);
    }

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

    int result = somaV(vetor, tam-1);

    printf("resultado: %d\n", result);

    return 0;
}