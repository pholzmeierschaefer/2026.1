#include <stdio.h>
#include <stdlib.h>

typedef char Item;

typedef struct elemStack {
    Item item;
    struct elemStack *next;
} ElemStack;

typedef struct {        
    ElemStack *top;    
} Stack;    

void initStack(Stack *s) {
    s->top = NULL;
}

int isEmptyStack(Stack *s) {
    if (s->top == NULL) return 1;
    else return 0;
}

void push(Stack *s, Item item) {
    ElemStack *aux = (ElemStack *)malloc(sizeof(ElemStack));
    if (aux == NULL) {
        printf("erro\n");
        exit(1);
    }
    aux->item = item;
    aux->next = s->top;
    s->top = aux;   
}

void pop(Stack *s, Item *item) {
    if (isEmptyStack(s)) {
        *item = '\0';
        return;
    }
    *item = s->top->item; 
    ElemStack *aux = s->top;
    s->top = s->top->next;
    free(aux);
}

void freeStack(Stack *s) {
    ElemStack *aux;
    while (!isEmptyStack(s)) {
        aux = s->top;
        s->top = s->top->next;
        free(aux);
    }
}

int main() {
    Stack Stack;
    initStack(&Stack);
    char c;
    char itemDesempilhado;
    int opcao;

    do {
        printf("digite caracterer ");
        scanf(" %c", &c); 
        
        push(&Stack, c);

        printf("1 - inserir outro\n0 - nao inserir mais\n ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("caracteres: ");
    while (!isEmptyStack(&Stack)) {
        pop(&Stack, &itemDesempilhado);
        printf("%c ", itemDesempilhado);
    }
    printf("\n");

    freeStack(&Stack);
    return 0;
}