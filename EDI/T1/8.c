#include <stdio.h>

int main(int argc, char const *argb[]){

    int salario;
    int filhos;
    float media_salario;
    float media_filhos;
    int i = 0;
    float soma_salario = 0;
    int soma_filho = 0;
    


    while (1){

        printf("Digite o salario: ");
        scanf("%d", &salario);
        
        if (salario < 0){
            break;
        }

        soma_salario = soma_salario + salario;

        
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);
        soma_filho = soma_filho + filhos;
        i++;
    }

    if (i > 0){
        media_filhos = soma_filho / i;
        media_salario = soma_salario / i;
        printf("A media salarial eh: %.2f\n", media_salario);
        printf("A media de filhos eh: %.2f", media_filhos);
    }

    else{
        printf("Nao foram digitados valores validos");
    }


    return 0;
}