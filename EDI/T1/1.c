#include <stdio.h>

int main(int argc, char const *argv[]){
    int horas;
    float valor;
    float salario;

    printf("Digite o numero de horas trabahadas: ");
    scanf("%d", &horas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor);


    if (horas > 200){
        salario = (horas*valor) * 1.05;
    }

    else{
        salario = horas * valor;
    }

    printf("O salario do funcionario eh: %.2f", salario);

    return 0;

}