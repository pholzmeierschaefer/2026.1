#include <stdio.h>

void CparaF (float celsius){
    //F = (9*C/5) + 32
    float fahrenheit = (9*celsius/5) + 32;
    printf("a temperatura em celsius eh: %.2f\n", fahrenheit);
}

void FparaC (float fahrenheit){
    //C = 5*(F-32)/9
    float celsius = 5*(fahrenheit-32)/9;
    printf("a temperatura em celsius eh: %.2f\n", celsius);
}

int main(){
    float celsius, fahrenehit;
    int escolha;

    printf("ESCOLHA QUAL OPERACAO\n");
    printf("1 - transformar celsius em fahrenheit\n2 - transformar fahrenheit em celsius\n0 - sair\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("digite a temperatura em celsius\n");
        scanf("%f", &celsius);
        CparaF(celsius);
        break;

    case 2:
        printf("digite a temperatura em fahrenheit\n");
        scanf("%f", &fahrenehit);
        FparaC(fahrenehit);
        break;
    case 0:
        printf("saindo");
        break;
    default:
        break;
    }
    
}