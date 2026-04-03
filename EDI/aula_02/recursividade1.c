#include <stdio.h>


int valb(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else if(expoente == 1){
         return base;
    }
    else{
        return base * valb (base, expoente -1);
    }
}

int main(){

    int base;
    int expoente;

    printf("digite base: \n");
    scanf("%d", &base);

    printf("digite expoente: \n");
    scanf("%d", &expoente);

    printf("%d\n", valb(base, expoente));



}