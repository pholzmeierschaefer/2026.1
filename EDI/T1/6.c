#include <stdio.h>

int main(int argc, char const *argb[]){

    int valor;
    int resultado = 0;
    

    printf("Digite o valor a ser somado: ");
    scanf("%d", &valor);

    for(int i = 0; i <= valor; i++){
        resultado = resultado + i;
    }
    
    printf("O resultado eh: %d", resultado);

    return 0;
}