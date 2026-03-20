#include <stdio.h>
#include <string.h>

void diferenca (){
    int a;
    int b;
    printf("Digite o valor a: \n");
    scanf("%d", &a);
    printf("Digite o valor b: \n");
    scanf("%d", &b);
    if(a==b){
        printf("os valores sao iguais\n");
    }
    else if(a > b){
        printf("a diferenca eh %d", a - b);
    }
    else{
        printf("a diferenca eh %d", b - a);
    }
}

int main(){

    diferenca();

    return 0;
}