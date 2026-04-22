#include <stdio.h>
#include "frac1.h"

// Função auxiliar apenas para formatar a saída no console
void imprimirFracao(char* operacao, Fracao f) {
    printf("%s: %d/%d\n", operacao, f.numerador, f.denominador);
}

int main() {
    // 1. Testando a Atribuição (AddFracao)
    printf("--- Teste de Atribuicao ---\n");
    Fracao f1 = AddFracao(1, 2); // 1/2
    printf("\n"); // AddFracao já tem um printf interno
    Fracao f2 = AddFracao(1, 3); // 1/3
    printf("\n\n");

    // 2. Testando a Multiplicação
    // (1/2) * (1/3) = 1/6
    Fracao multiplicacao = MultFracao(f1, f2);
    imprimirFracao("Multiplicacao (1/2 * 1/3)", multiplicacao);

    // 3. Testando a Divisão
    // (1/2) / (1/3) -> (1/2) * (3/1) = 3/2
    Fracao divisao = DivideFracao(f1, f2);
    imprimirFracao("Divisao (1/2 / 1/3)", divisao);

    // 4. Testando a Adição
    // (1/2) + (1/3) -> (3+2)/6 = 5/6
    Fracao soma = AdicionaFracao(f1, f2);
    imprimirFracao("Adicao (1/2 + 1/3)", soma);

    // 5. Testando a Subtração
    // (1/2) - (1/3) -> (3-2)/6 = 1/6
    Fracao sub = SubtraiFracao(f1, f2);
    imprimirFracao("Subtracao (1/2 - 1/3)", sub);

    return 0;
}