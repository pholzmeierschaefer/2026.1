#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p=NULL;
    p = (int *)malloc(sizeof(int));
    *p=22;

    printf("conteudo de p: %d\n", *p);
    printf("local de apontamento: %p", p);

    scanf("%d", p); //n usa o &p pq já tem o endereço
    return 0;
}

