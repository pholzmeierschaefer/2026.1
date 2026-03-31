#include <stdio.h>

typedef struct{
    int numerador;
    int denominador;
}Fraction;

Fraction setFraction(int numerador, int denominador){
    Fraction frac;
    frac.numerador = numerador;
    frac.denominador = denominador;

    printf("numerador: %d\n", numerador);
    printf("denominador: %d\n", denominador);
    return frac;
}

Fraction multFraction(Fraction frac1, Fraction frac2){
    Fraction resultado;
    resultado.numerador = frac1.numerador * frac2.numerador;
    resultado.denominador = frac1.denominador * frac2.denominador;
    return resultado;
}

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
