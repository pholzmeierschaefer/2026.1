#include <stdio.h>
#include <stdlib.h>


struct tlist {
    int valor;
    struct tlist *next;
};typedef struct tlist list;

list *getList (int row, int col, int mat[row][col]){
    list *head = NULL;
    list *ultimo = NULL;

    
   


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            list *novoNo = (list *)malloc(sizeof(list));
            novoNo->valor = mat[i][j];
            novoNo->next = NULL;
            if(head == NULL){
                head = novoNo;
                ultimo = novoNo;
            }
            else{
                ultimo->next = novoNo;
                ultimo = novoNo;
            }
        }
    }
    return head;

}


/////////somente para testar////////////////////
void printList(list *head) {
    list *temp = head;
    printf("Lista: ");
    while (temp != NULL) {
        printf("%d -> ", temp->valor);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 4. Função para liberar a memória da lista (boa prática!)
void freeList(list *head) {
    list *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Definindo dimensões e uma matriz de teste 2x3
    int rows = 2;
    int cols = 3;
    int minhaMatriz[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("Matriz original:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", minhaMatriz[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------\n");

    // Chamada da função
    list *minhaLista = getList(rows, cols, minhaMatriz);

    // Verificação do resultado
    if (minhaLista != NULL) {
        printList(minhaLista);
        freeList(minhaLista); // Limpando a memória
    } else {
        printf("A lista está vazia ou houve erro de alocação.\n");
    }

    return 0;
}