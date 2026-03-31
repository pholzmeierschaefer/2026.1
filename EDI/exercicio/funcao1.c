#include <stdio.h>

void diferenca(int num1,int num2){
    if(num1 == num2){
        printf("os valores sao iguais");
    }

    if(num1 > num2){
        printf("diferenca: %d\n", num1 - num2);
    }

    if(num1 < num2){
        printf("diferenca: %d\n", num2 - num1);
    }

}

int main(){

    int num1;
    int num2;

    printf("digite o primeiro valor inteiro: \n");
    scanf("%d", &num1);

    printf("digite o segundo valor inteiro: \n");
    scanf("%d", &num2);

    diferenca(num1, num2);

    return 0;


}