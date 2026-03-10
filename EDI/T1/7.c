#include <stdio.h>

int main(int argc, char const *argb[]){
    
    int num = 1;
    int entre = 0;
    int total = 0;
    float porcentagem;

    while(num > 0){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num <= 0){
            break;
        }

        total ++;

        if (num >= 10 && num <= 20){
            entre++;
        }
    }

    if (total > 0){
       porcentagem = (float)entre / total * 100;
        printf("%% entre 10 e 20: %.0f%%", porcentagem);
    }

    else{
        printf("Voce nao digitou nenhum numero valido");
    }



    return 0;
}