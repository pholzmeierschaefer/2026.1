#include <stdio.h>

int main(int argc, char const *argb[]){
    
    float preco;
    int forma;
    float val_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    printf("Escolha a forma de pagamento:\n1 - a vista\n2 - a prazo\n: ");
    scanf("%d", &forma);

    /*
    if(forma == 1){
        printf("Voce selecionou pagamento a vista\n");
        val_final = preco * 0.95;
        printf("Valor final do produto eh: %.2f", val_final);
    }

    else if(forma == 2){
        printf("Voce selecionou pagamento a prazo\n");
        val_final = preco * 1.10;
        printf("Valor final do produto eh: %.2f", val_final);
    }

    else{
        printf("Voce selecionou uma forma de pagamento invalida"); 
    }
    */
    
    switch (forma){
    case 1:
        printf("Voce selecionou pagamento a vista\n");
        val_final = preco * 0.95;
        printf("Valor final do produto eh: %.2f", val_final);
        break;
    
    case 2:
        printf("Voce selecionou pagamento a prazo\n");
        val_final = preco * 1.10;
        printf("Valor final do produto eh: %.2f", val_final);
        break;
    
    default:
        printf("Voce selecionou uma forma de pagamento invalida");
        break;
    }
    
    return 0;
}