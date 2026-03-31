#include <stdio.h>

void somaImpares(int inicio, int fim, int *p1){


    *p1 = 0;
    for(int i = inicio; i <= fim; i++){
        if(i % 2 != 0){
            *p1 += i;
        }
    }
}

int main(){
    int soma;
    int inicio, fim;


    printf("digite onde se incia\n");
    scanf("%d", &inicio);

    printf("digite onde se encerra\n");
    scanf("%d", &fim);

    somaImpares(inicio, fim, &soma);

    printf("valor das somas: %d\n", soma);

    return 0;

}