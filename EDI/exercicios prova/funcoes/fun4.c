/*4. Crie um aplicativo de conversão entre as temperaturas Celsius e Fahrenheit.
a.
Primeiro o usuário deve escolher se vai entrar com a temperatura em Celsius ou Fahrenheit,
depois a conversão escolhida é realizada.

b.
Se C é a temperatura em Celsius e F em Fahrenheit, as fórmulas de conversão são:
i. C = 5*(F-32)/9
ii. F = (9*C/5) + 32*/

#include <stdio.h>


void celsius_fahrenheit(){
    float temp;
    int escolha;
    float cel;
    float fah;

    printf("Escolha a operacao\n 1 - celsius -> fahrenheit\n 2 - fahrenheit -> celsius\n 0 - sair\n");
    scanf("%d", &escolha);

    //cels -> fahre
    if (escolha == 1){
        printf("digite a temperatura em celsius:\n");
        scanf("%f", &cel);

        temp = ((9*cel)/5) + 32;
        printf("celsius -> fahrenheit: %.2f\n", temp);
    }
    //fareh -> cel
    else if (escolha == 2){
        printf("digite a temperatura em fahrenheit:\n");
        scanf("%f", &fah);
        temp = (5*(fah-32))/9;
        printf("fahrenheit -> celsius: %.2f\n", temp);
    }

    else if(escolha == 0){
        printf("saindo...\n");
    }

    else{
        printf("valor inválido\n");
    }

}

int main(){
    
    celsius_fahrenheit();
    return 0;
}



