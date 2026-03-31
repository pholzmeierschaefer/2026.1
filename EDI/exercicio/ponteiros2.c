#include <stdio.h>

void maior(int a, int b, int *c){
    if(a > b){
        *c = a;
        printf("o maior valor eh: %d\n", *c);
    }
    else if(b > a){
        *c = b;
        printf("o maior valor eh: %d\n", *c);
    }
    else{
        printf("sao iguais\n");
    }
}


int main(){
    int a, b, c;

    printf("digite o valor de a\n");
    scanf("%d", &a);
    printf("digite o valor de b\n");
    scanf("%d", &b);
    
    maior(a, b, &c);
}