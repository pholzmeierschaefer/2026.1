/*2. Crie uma função que receba 2 números e retorne o maior valor entre eles (se
forem iguais, retorna o segundo).*/


#include <stdio.h>

int MaiorMenor(int um, int dois){
    if(um > dois){
        return um;
    }

    else{
        return dois;
    }
    
}

int main(){
    int um;
    int dois;

    printf("digite o primeiro valor: ");
    scanf("%d", &um);
    printf("digite o segundo valor: ");
    scanf("%d", &dois);

    printf("o maior valor eh: %d\n", MaiorMenor(um, dois));


    return 0;
}