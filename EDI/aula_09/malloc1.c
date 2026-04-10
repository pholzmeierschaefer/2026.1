#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
    struct data *proxima;

}; typedef struct data Data;

int main(){
    Data *dt, *primeira;

    primeira = (Data *) malloc (sizeof(Data));
    primeira->dia = 9;
    primeira->mes = 4;
    primeira->ano = 2026;
    primeira->proxima = NULL;

    primeira->proxima = (Data *) malloc (sizeof(Data));
    dt = primeira->proxima;
    dt->dia = 30;
    dt->mes = 4;
    dt->ano = 2026;
    dt->proxima = NULL;

    dt->proxima = (Data *) malloc (sizeof(Data));
    dt = dt->proxima;





    
    return 0;

}