/*

3.
Implemente uma função recursiva que calcule o máximo divisor comum (mdc) entre dois números.
    Por exemplo, o mdc de 12 e 18 é 6

Definição (Algoritmo de Euclides):
    mdc (m,n) (
                se n == 0 entao m               caso base
                caso contrario mdc(n, m%n)      caso recusivo
    )
                */

#include <stdio.h>

int mdc(int m, int n){
    if(n == 0){
        return m;
    }

    else{
        return mdc(n, m%n);
    }
}

int main(){
    int a, b;
    printf("digite o primeiro valor: \n");
    scanf("%d", &a);
    printf("digite o segundo valor: \n");
    scanf("%d", &b);

    int result = mdc(a, b);
    printf("o resultado eh: %d\n", result);
    return 0;
}