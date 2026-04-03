#include <stdio.h>

int somavet(int vetor[], int n){
    if (n == 0){
        return vetor[0];
    }
    else{
        return vetor[n] + somavet(vetor, n-1);
    }
}

int main(){
    int vetor[] = {10, 20, 30, 40, 50};
    
    int n = 4;
    int total = somavet(vetor, n);
    
    
    printf("soma de todos e: %d\n", total);

    return 0;

}

