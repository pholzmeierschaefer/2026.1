#include <stdio.h>

void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;

}

int main(){
    int a;
    int b;

    printf("digite o valor de a:\n");
    scanf("%d", &a);
    printf("digite o valor de b:\n");
    scanf("%d", &b);


    printf("antes de trocar a=%d, b=%d\n", a, b);
    troca(&a, &b);
    printf("depois de trocar a=%d, b=%d\n", a, b);
    
}
