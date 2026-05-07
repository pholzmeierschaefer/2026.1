#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
struct lista{
    int id;
    char nome[MAX+1];

    struct lista *next;
    struct lista *prev;

};
typedef struct lista Lista;

typedef struct {
    Lista *first;
    Lista *last;
    int size; // da lista
} Sentinela;

Lista *newElement(int id, char *nome){
    Lista *new = (Lista *) malloc (sizeof(Lista));
    new->id = id;
    snprintf(new->nome, sizeof(new->nome), "%s", nome);
    new->next = NULL;
    new->prev = NULL;
    return new;
}

void printELements(Lista *first){
    Lista *aux;
    for (aux = first; aux != NULL; aux = aux->next){
        printf("%d - %s\n", aux->id, aux->nome);
    }

}

void addElementKeeper(Sentinela *sentinela, Lista *new){
    Lista *aux;
    if(sentinela->first == NULL && sentinela->last == NULL){
        sentinela->first = new;
        sentinela->last = new;
        sentinela->size = 1;
        return;
    }

    aux = sentinela->first;
    while(aux != NULL){
        if(aux->id >= new->id){
            break;
        }
        aux = aux->next;
    }

    // lógica ponteiros
    // se for colocar no começo
    if(aux == sentinela->first){
        new->next = aux;
        aux->prev = new;
        sentinela->first = new;
    }
    // colocar no final
    else if(aux == NULL){
        Lista *last = sentinela->last;
        last->next = new;
        new->prev = last;
        sentinela->last = new;
    }
    // colocar no meio
    else{
        Lista *anterior = aux->prev;
        new->prev = anterior;
        new->next = aux;
        anterior->next = new;
        aux->prev = new;
    }

    sentinela->size++;
}








