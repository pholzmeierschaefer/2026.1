/*2.
Declare um tipo Fraction que consista em uma struct contendo dois membros, 
numerador e denominador, do tipo int, e faça o seguinte:
a.
Escreva uma função setFraction que recebe dois argumentos do tipo int 
(o numerador e o denominador), e retorna os valores em um tipo Fraction.
b.
Escreva uma função multFraction que recebe dois argumentos do tipo Fraction, 
multiplica, armazena o resultado em uma outra variável do tipo Fraction e retorna esta variável. 
 Lembrando: 4/5 x 3/2 = (4 x 3)/(5 x 2)*/

 #include <stdio.h>

 typedef struct {
    int numerador;
    int denominador;
 }Fraction;

 Fraction setFraction(int num, int den){
    Fraction frac;

    frac.numerador = num;
    frac.denominador = den;
    
    printf("numerador: %d\n", frac.numerador);
    printf("denominador: %d\n", frac.denominador);
    
    return frac;
 }

 Fraction multFraction(Fraction frac1, Fraction frac2){
    Fraction frac_mult;

    frac_mult.numerador = frac1.numerador * frac2.numerador;
    frac_mult.denominador = frac1.denominador * frac2.denominador;

    return frac_mult;
 }


 int main(){

    int num;
    int den;

    printf("Digite o numerador da fracao 1:\n");
    scanf("%d", &num);

    printf("Digite o denominador da fracao 1:\n");
    scanf("%d", &den);

    Fraction um = setFraction(num, den);

    printf("Digite o numerador da fracao 2:\n");
    scanf("%d", &num);

    printf("Digite o denominador da fracao 2:\n");
    scanf("%d", &den);

    Fraction dois = setFraction(num, den);

    Fraction resultado = multFraction(um, dois);
    printf("multiplicao: \n");
    printf("%d/%d\n", resultado.numerador, resultado.denominador);

 }