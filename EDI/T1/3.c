#include <stdio.h>

int main(int argc, char const *argb[]){
    int inicio;
    int fim;
    int duracao;

    printf("Digite o horario de inicio: ");
    scanf("%d", &inicio);

    printf("Digite o horario de encerramento: ");
    scanf("%d", &fim);

    if(fim>inicio){
        duracao = fim - inicio;
    }

    else{
        duracao = (24 - inicio) + fim;
    }

    printf("A duracao do evento foi %d horas", duracao);


    return 0;
}