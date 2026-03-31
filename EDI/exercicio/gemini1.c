#include <stdio.h>

void contaTipos(int v[], int tam, int *p_pares, int *p_impares){
    *p_pares = 0;
    *p_impares = 0;
    for (int i = 0; i < tam; i++){
        if(v[i]%2 == 0){
            (*p_pares)++;
        }
        else{
            (*p_impares)++;
        }
    }

    printf("valores impares: %d\n", *p_impares);
    printf("valores pares: %d\n", *p_pares);
}


int main(){

    int vetor[5];
    int tamanho = 5;
    int p1, p2;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }   

    contaTipos(vetor, tamanho, &p1, &p2);

    return 0;


}