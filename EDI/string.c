#include <stdio.h>

int main(){
    char string[20];
    printf("digite uma string: ");
    scanf("%s", string);           // le o valor digitado até o primeiro espaço " " ou /0

    printf("voce digitou: %s", string);

    return 0;
}