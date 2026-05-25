#include <stdio.h>
#include <stdlib.h>

typedef char Item;

typedef struct Node {
    Item dado;
    struct Node* next;
} Node;

typedef struct {
    Node* inicio;
    Node* fim;
} Queue;


void initQueue(Queue *queue) {
    queue->inicio = NULL;
    queue->fim = NULL;
}


int isEmpty(Queue *queue) {
    return (queue->inicio == NULL); 
}


void enQueue(Queue *queue, Item item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("erro\n");
        exit(1);
    }
    newNode->dado = item;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->inicio = newNode;
        queue->fim = newNode;
    } else {
        queue->fim->next = newNode;
        queue->fim = newNode;
    }
}


Item deQueue(Queue *queue) {
    if (isEmpty(queue)) {
        return '\0'; 
    }

    Node* temp = queue->inicio;
    Item item = temp->dado;

    queue->inicio = queue->inicio->next;

    if (queue->inicio == NULL) {
        queue->fim = NULL;
    }

    free(temp);
    return item;
}


void freeAll(Queue *queue) {
    while (!isEmpty(queue)) {
        deQueue(queue); 
    }
}

int main() {
    Queue Queue;
    initQueue(&Queue);
    char c;
    int opcao;

    
    do {
        printf("digite caracterer ");
        
        
        scanf(" %c", &c); 
        
        enQueue(&Queue, c);

        printf("1 - inserir outro\n0 - nao inserir mais\n ");
        scanf("%d", &opcao);
        
      
    } while (opcao == 1);

    printf("caracteres: ");
    
    while (!isEmpty(&Queue)) {
        printf("%c ", deQueue(&Queue));
    }
    printf("\n");

    freeAll(&Queue);
    return 0;
}