#include <stdio.h>

int main(int argc, char const *argb[]){

    int n;
    int resultado = 1;

    printf("Digite o valor de n: ");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++ ){
        resultado *= i;
    }

    printf("o resultado eh: %d", resultado);

    return 0;
}