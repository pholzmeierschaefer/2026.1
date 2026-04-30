#include <stdio.h>

int soma_digitos(int n){
    int aux;
    if(aux == 0) return n;
    else{
        aux = n % 10;
        return aux +(soma_digitos(n/10));
    }
}