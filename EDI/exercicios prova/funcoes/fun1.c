/*1. Faça uma função que lê dois inteiros e apresenta a diferença entre os dois.*/

#include <stdio.h>

int diferenca(int um, int dois){

    int dif;

    if(um == dois){
        dif = um - dois;
        return dif;
    }

    if(um > dois){
        dif = um - dois;
        return dif; 
    }

    else{
        dif = dois - um;
        return dif;
    }
}

int main(){
    int um;
    int dois;

    printf("digite o primeiro valor: ");
    scanf("%d", &um);
    printf("digite o segundo valor: ");
    scanf("%d", &dois);

    printf("a diferenca eh: %d\n", diferenca(um, dois));

    return 0;


}