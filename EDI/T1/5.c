#include <stdio.h>

int main(int argc, char const *argb[]){

    int op1;
    int op2;
    int resultado = 0;
    int i = 0;

    printf("digite o operando 1: ");
    scanf("%d", &op1);

    printf("digite o operando 2 (quantidade de vezes): ");
    scanf("%d", &op2);

    while (i < op2){
        resultado = resultado + op1;
        i ++;
    }

    printf("o resultado eh: %d", resultado);
    
    return 0;
}