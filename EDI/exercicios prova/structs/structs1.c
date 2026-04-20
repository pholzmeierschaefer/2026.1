/*1.
Escreva as seguintes funções considerando o tipo Data definido nesta apresentação:
a.
int extraiDia(Data data)
Retorna o dia que compõe a data passada como parâmetro (data).
b.
int comparaDatas(Data data1, Data data2)
Retorna -1 se a data data1 é anterior à data data2, 
1 se a data data1 é posterior à data data2 e 0 se as datas data1 e data2 são iguais.*/

#include <stdio.h>


typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

//a
int extraiDia(Data data){
    return data.dia;
}

//b
int comparaDatas(Data data1, Data data2){
    if(data1.ano<data2.ano){
        return -1;
    }
    if(data1.ano>data2.ano){
        return 1;
    }

    if(data1.mes<data2.mes){
        return -1;
    }
    if(data1.mes>data2.mes){
        return 1;
    }

    if(data1.dia<data2.dia){
        return -1;
    }
    if(data1.dia>data2.dia){
        return 1;
    }

    else{
        return 0;
    }
}


int main(){
    Data data1;
    Data data2;

    printf("digite o dia da data 1: ");
    scanf("%d", &data1.dia);
    printf("digite o mes da data 1: ");
    scanf("%d", &data1.mes);
    printf("digite o ano da data 1: ");
    scanf("%d", &data1.ano);


    printf("digite o dia da data 2: ");
    scanf("%d", &data2.dia);
    printf("digite o mes da data 2: ");
    scanf("%d", &data2.mes);
    printf("digite o ano da data 2: ");
    scanf("%d", &data2.ano);


    printf("dia data1: %d\n", extraiDia(data1));
    printf("dia data2: %d\n", extraiDia(data2));

    printf("Retorna -1 se a data data1 é anterior à data data2\nRetorna 1 se a data data2 é anterior à data data1\nRetorna 0 se as datas são iguais:\n");
    printf("%d\n", comparaDatas(data1, data2));



}