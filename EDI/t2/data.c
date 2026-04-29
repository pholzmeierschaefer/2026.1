#include "data.h"
#include <stdio.h>
#include <string.h>

void setDate(data *d, int dia, int mes, int ano){
    
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}

int getDate(data data, char tipo){
    if (tipo == 'D' || tipo == 'd' )
        return data.dia;
    if (tipo == 'M' || tipo == 'm' )
        return data.mes;
    if (tipo == 'Y' || tipo == 'y' )
        return data.ano;
    else{
        return -1;
    }
}

void showDate(data data){
    printf("%02d/%02d/%04d\n", data.dia, data.mes, data.ano);
}

int dataComp(data d1, data d2){
    if (d1.ano > d2.ano) 
        return 1;
    if (d1.ano < d2.ano) 
        return -1;
    
    if (d1.mes > d2.mes) 
        return 1;
    if (d1.mes < d2.mes) 
        return -1;
    
    if (d1.dia > d2.dia) 
        return 1;
    if (d1.dia < d2.dia) 
        return -1;
    else{
        return 0;
    }
}

int isLeapYear(data data){
    if(data.ano % 400 == 0) // exessao da regra do século
        return 1;
   
    else if(data.ano % 4 == 0)
        return 1;

     else if(data.ano % 100 == 0) //regra do século
        return 0;

    else{
        return 0;
    }    
}


int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int getDiff(data d1, data d2) {
    int dias = 0;
    data menor, maior;

    //menor / maior data
    if (dataComp(d1, d2) == -1) {
        menor = d1;
        maior = d2;
    } else {
        menor = d2;
        maior = d1;
    }

    //passar dia por dia contando da menor ate a maior
    while (menor.dia != maior.dia || menor.mes != maior.mes || menor.ano != maior.ano) {
        dias++;
        menor.dia++;

        // bissexto
        int diasNoMesAtual = diasMeses[menor.mes - 1];
        if (menor.mes == 2 && isLeapYear(menor)) {
            diasNoMesAtual = 29;
        }

        //se tem mais dias que  no mes passa de mes
        if (menor.dia > diasNoMesAtual) {
            menor.dia = 1;
            menor.mes++;
        }

        // se tem mais de 12 meses vira ano
        if (menor.mes > 12) {
            menor.mes = 1;
            menor.ano++;
        }
    }

    return dias;
}


int getDayFromYear(data data){
    int total = data.dia;
    for (int i = 1; i < data.mes; i++) {
        total += diasMeses[i];

        // adiciona 1 dia se for fevereiro de ano bissexto
        if (i == 2 && isLeapYear(data)) {
            total += 1;
        }
    }
    return total;
}