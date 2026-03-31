#include <stdio.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

int extraiData(Data data){
    return data.dia;
}

int comparaDatas(Data data1, Data data2){
    if (data1.ano < data2.ano){
        return -1;
    }
    if (data1.ano > data2.ano){
        return 1;
    }

    if (data1.mes < data2.mes){
        return -1;
    }
    if (data1.mes > data2.mes){
        return 1;
    }

    if (data1.dia < data2.dia){
        return -1;
    }
    if (data1.dia > data2.dia){
        return 1;
    }

    return 0;    
}






int main(){
    Data tdata1 = {
        10,
        2,
        2026,
    };

    Data tdata2 = {
        10,
        3,
        2026,
    };

    int dia = extraiData(tdata1);
    int compara = comparaDatas(tdata1, tdata2);

    printf("dia extraido: %d\n", dia);
    printf("comparacao de data: %d\n", compara);
    return 0;
}
