#include <stdio.h>

typedef struct{
    float base;
    float altura;
    float area;
} Retangulo;

void calculaArea (Retangulo *r){
    r->area = (r->base * r->altura);
}

int main(){
    Retangulo r1;

    r1.base = 2;
    r1.altura = 3;
    r1.area = 0;

    calculaArea(&r1);
    printf("base: %.2f\naltura: %.2f\narea: %.2f\n", r1.base, r1.altura, r1.area);
    return 0;
}

