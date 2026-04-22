/*
1.
implemente uma função recursiva que, 
dados dois números inteiros base (b) e expoente (e), calcula o valor de be (e≥0).

b^e (
        se e == 0 entao 1           caso base 1
        se e == 1 entao b           caso base 2
        caso contrario bxb ^ (e-1)  caso recusivo
)

*/

#include <stdio.h>

int rec(int b, int e){
    if(e==0) return 1;
    if (e ==1) return b;
    else{
        return b*rec(b, e-1);
    }    


}

int main(){
    int b, e;

    printf("digite a base: ");
    scanf("%d", &b);
    printf("digite o expoente: ");
    scanf("%d", &e);
    

    printf("base elevado ao expoente eh: %d\n", rec(b, e));
    return 0;
}