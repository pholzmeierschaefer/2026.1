/*
Exercício
Implemente um TAD que represente frações e as operações sobre as mesmas 
    Atribuição
    Multiplicação 
    Divisão
    Opcional:
        Adição e subtração (tem que calcular o MMC, ou usar a fórmula geral)
            
*/

typedef struct{
    int numerador;
    int denominador;
} Fracao;

Fracao AddFracao(int numerador, int denominador);

Fracao MultFracao(Fracao um, Fracao dois);

Fracao DivideFracao(Fracao um, Fracao dois);

Fracao AdicionaFracao(Fracao um, Fracao dois);

Fracao SubtraiFracao(Fracao um, Fracao dois);

