#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

struct _heap
{
    int heap[SIZE];
    int size;

};
typedef struct _heap Heap;


int LeftChild(int i){

    return 2*i+1;

}

int RightChild(int i){
    return 2*i+2;
}

int getParent(int i){
    return (i-1)/2;
}

void insertHeapMax(int i, Heap *heap){
    if(heap->size == 0){
        heap->heap[0] = i;
        heap->size ++;
        return;
    }

    int n = heap->size;
    heap->heap[n] = i;
    heap->size ++;

    while(n>0 && heap->heap[n] > heap->heap[getParent(n)]){
        int aux = heap->heap[n];
        heap->heap[n] = heap->heap[getParent(n)];
        heap->heap[getParent(n)] = aux;
        n = getParent(n);

        }





}


void printHeap(Heap *heap){
    for(int i = 0; i<heap->size; i++){
        printf("%d, ",heap->heap[i]); 
    }
    printf("\n");
    
}

int removeMaxHeap(Heap *heap){
    if(heap->size == 0){
        return -1;
    }


    int value = heap->heap[0];

    
    heap->heap[0] = heap->heap[heap->size - 1];
    heap->size--;

    int n = 0;

   
    while(LeftChild(n) < heap->size){
        int bigger = LeftChild(n);
        int right = RightChild(n);

        if(right < heap->size && heap->heap[right] > heap->heap[bigger]){
            bigger = right;
        }

    
        if(heap->heap[n] >= heap->heap[bigger]){
            break;
        }

        
        int aux = heap->heap[n];
        heap->heap[n] = heap->heap[bigger];
        heap->heap[bigger] = aux;
       
        n = bigger;
    }

    return value;
}

int main(){

    Heap *heap = malloc(sizeof(Heap));
    heap->size = 0;

    insertHeapMax(20, heap);
    insertHeapMax(10, heap);
    insertHeapMax(5, heap);
    insertHeapMax(4, heap);
    insertHeapMax(30, heap);
    insertHeapMax(50, heap);
    insertHeapMax(70, heap);
    insertHeapMax(45, heap);

    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);
    removeMaxHeap(heap);
    printHeap(heap);



    return 0;
}