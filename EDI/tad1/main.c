
#include <stdio.h>
#include "frac.h"

int main(){
    int a;
    int b;

    printf("Digite o numerador:\n");
    scanf("%d", &a);

    printf("Digite o denominador:\n");
    scanf("%d", &b);

    Fraction um = setFraction(a, b);

    printf("Digite o numerador:\n");
    scanf("%d", &a);

    printf("Digite o denominador:\n");
    scanf("%d", &b);

    Fraction dois = setFraction(a, b);

    Fraction resultado = multFraction(um, dois);
    printf("resultado multiplicacao: %d/%d\n", resultado.numerador, resultado.denominador);

    return 0;
}

