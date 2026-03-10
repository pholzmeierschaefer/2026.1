#include <stdio.h>

int main(int argc, char const *argb[]){

    int numero;
    

    int negativos = 0;
    int positivos = 0;

    for(int i = 0; i <= 3; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero >= 0){
            positivos += 1;
        }

        else if (numero < 0){
            negativos +=1;
        }
    }

    printf("foram digitados %d numeros positivos e %d numeros negativos", positivos, negativos);

    return 0;
}
