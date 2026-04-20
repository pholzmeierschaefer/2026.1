/*Crie uma função que receba 3 números e retorne o maior valor, utilizando
uma chamada para a função anterior.*/


#include <stdio.h>

int MaiorMenor(int um, int dois){
    if(um > dois){
        return um;
    }

    else{
        return dois;
    }
    
}


int maior3(int um, int dois, int tres){
    int quatro = MaiorMenor(um, dois);

    int maior = MaiorMenor(quatro, tres);

    return maior;
}

int main(){
    int um;
    int dois;
    int tres;

    printf("digite o primeiro valor: \n");
    scanf("%d", &um);
    printf("digite o segundo valor: \n");
    scanf("%d", &dois);
    printf("digite o terceiro valor: \n");
    scanf("%d", &tres);

    printf("o maior valor eh: %d\n", maior3(um, dois, tres));


    return 0;
}