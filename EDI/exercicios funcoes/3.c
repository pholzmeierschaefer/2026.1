
#include <stdio.h>
#include <string.h>

float retornamaior2(float a, float b){
    if (a > b){
        return a;
    }

    else{
        return b;
    }
}

float retorna3(float a, float b, float c){
    float maior_prov = retornamaior2(a, b);

    return retornamaior2(maior_prov, c);
}



int main(){

    float n1, n2, n3;

    printf("digite o primeiro valor\n");
    scanf("%f", &n1);

    printf("digite o segundo valor\n");
    scanf("%f", &n2);

    printf("digite o terceiro valor\n");
    scanf("%f", &n3);

    float maior= retorna3(n1, n2, n3);

    printf("o maior numero eh %.2f", maior);
    
    return 0;
}