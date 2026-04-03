#include "frac.h"
#include <stdio.h>

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