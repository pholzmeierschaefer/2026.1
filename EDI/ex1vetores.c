# include <stdio.h>


int main(){
    
    int valores [5];
    int i;

    printf("Digite 5 valores inteiros\n");
    for(i = 0; i < 5; i++){
        printf("valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("Valores inseridos:\n");
    for(i = 0; i < 5; i++){
        printf(" %d", valores[i]);
    }

    return 0;

}