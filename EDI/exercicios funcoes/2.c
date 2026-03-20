#include <stdio.h>
#include <string.h>

void retornamaior(){

    float a;
    float b;

    printf("digite o primeiro valor\n");
    scanf("%f", &a);

    printf("digite o segundo valor\n");
    scanf("%f", &b);

    if (a > b){
        printf("o maior valor eh %.2f", a);
    }

    else if(b > a){
        printf("o maior valor eh %.2f", b);
    }

    else{
        printf("o maior valor eh %.2f", b);
    }

}

int main(){
    retornamaior();
    return 0;
}