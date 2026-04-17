#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct _lista{
    struct _lista *first = NULL;

    int id;
    char nome[MAX+1];

    struct _lista *next;


};typedef struct _lista Lista;

typedef struct{
    Lista *first;

} sentinel;


Lista *newElement(int id, char *nome){
    Lista *new = (Lista *) malloc(sizeof(Lista));
    new->id = id;
    //new->nome = nome;
    strcpy(new->nome, nome);
    //snprintf(new->nome, sizeof(new->nome), "%s", nome);
    new->next = NULL;

    return new;

}

void printElements(Lista *first){
    Lista *aux;

    for (aux = first; aux != NULL; aux=aux->next){
        printf("%d - %s", aux->id, aux->nome);
    }

}

Lista *addElement(Lista *first, Lista *new){
    Lista *aux;
    

    if (first == NULL){
        return new;
    }

    aux = first;
    while(aux->next != NULL){
        aux = aux->next;

    }


    aux->next = new;
    return first;
}



int main(){


    sentinel *sentinela;


    sentinela->first = malloc(sizeof(sentinel));
    Lista (new)

    first = newElement(1, "nome\n");

    printElements(first);




    return 0;
}

