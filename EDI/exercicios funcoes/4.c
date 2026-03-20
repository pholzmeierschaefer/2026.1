#include <stdio.h>
#include <string.h>

void fare (){
    float temp_cels;

    printf("digite a temperatura em celsius ");
    scanf("%f", &temp_cels);
    float temperatura = (9*temp_cels/5) + 32;
    printf("a temperatura em fahrenheit eh: %.2f", temperatura);
}

void celsius(){

    float temp_fare;
    printf("digite a temperatura em fahrenheit ");
    scanf("%f", &temp_fare);
    float temperatura = (5*(temp_fare-32))/9;
    printf("a temperatura em celsius eh: %.2f", temperatura);
}



int main(){
    int escolha;

    printf("\n\nse sua temperatura eh celsius e quer converter para fahrenheit digite 1\n\nse sua temperatura eh em fahrenheit e quer converter para celsius digite 2\n\npara sair digite 0\n\n");
    scanf("%d", &escolha);


    if(escolha == 1){
        fare();
    }

    else if(escolha == 2){
        celsius();
    }

    else if(escolha == 0){
        printf("saindo...\n");
    }

    else{
        printf("digite um valor valido");
    }

    

    



    

    }


    

