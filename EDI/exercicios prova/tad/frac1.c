#include "frac1.h"
#include <stdio.h>

Fracao AddFracao(int numerador, int denominador){
    Fracao fracao;
    fracao.numerador = numerador;
    fracao.denominador = denominador;

    printf("fracao atribuida:\n%d/%d", fracao.numerador, fracao.denominador);
    return fracao;

}

Fracao MultFracao(Fracao um, Fracao dois){
    Fracao resultado;
    resultado.numerador = um.numerador * dois.numerador;
    resultado.denominador = um.denominador * dois.denominador;

    return resultado;
}

Fracao DivideFracao(Fracao um, Fracao dois){
    Fracao resultado;
    int aux;

    aux = dois.numerador;

    dois.numerador = dois.denominador;
    dois.denominador = aux;

    resultado.numerador = um.numerador * dois.numerador;
    resultado.denominador = um.denominador * dois.denominador;

    return resultado;
}

Fracao AdicionaFracao(Fracao um, Fracao dois){
    /*
        um.numerador*dois.denominador) + (um.denominaor*dois.numerador) 
        um.denominador*dois.denominador
    */

    Fracao resultado;

    resultado.numerador = (um.numerador*dois.denominador) + (um.denominador*dois.numerador);
    resultado.denominador = um.denominador*dois.denominador;
    return resultado;
}

Fracao SubtraiFracao(Fracao um, Fracao dois){
    Fracao resultado;

    resultado.numerador = (um.numerador*dois.denominador) - (um.denominador*dois.numerador);
    resultado.denominador = um.denominador*dois.denominador;
    return resultado;

}