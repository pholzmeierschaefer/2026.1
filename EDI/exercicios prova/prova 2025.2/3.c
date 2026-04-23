#include <stdio.h>

/*3- Dada a definição recursiva abaixo que apresenta uma forma de calcular a parte inteira do log na base 2. 
Por exemplo, log2(55) = 5, 781, mas pela definição abaixo retornaria 5, ou seja, 55 pode ser dividido 5 vezes por 2.
 log2(n) = (
                0 se n < 2
                1+log2(n/2)
            )

Implemente uma função em C que calcula o logaritmo inteiro na base 2.
*/


int log2(int n){
    if(n < 2) return 0;
    else{
        return 1+log2(n/2);
    }
}