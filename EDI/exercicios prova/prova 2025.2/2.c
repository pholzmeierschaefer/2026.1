#include <stdio.h>

struct tlist {
    int valor;
    struct tlist *next;
};typedef struct tlist list;

void swapElement (list *first, int key){

    list *aux, *ant;

    ant=first;

    for (aux = first; aux!= NULL; aux= aux->next){
        if(aux->valor==key) break;
        ant = aux;
    }

    if(aux == first|| aux == NULL) return;
    int reserva = ant->valor;
    ant->valor=aux->valor;
    aux->valor=reserva;
    return;
}