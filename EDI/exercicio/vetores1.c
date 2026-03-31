#include <stdio.h>

int main(){

    int num [5];

    printf("digite 5 numeros: \n");
    for(int i=0; i < 5; i++){
       
        scanf("%d", &num[i]); //coloca no vetor
    }

    for(int i = 0; i < 5; i++){
        printf("%d", num[i]);
    }
}