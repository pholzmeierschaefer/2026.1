#include <stdio.h>

void retornaMaior(int num1,int num2){
    if(num1 > num2){
        printf("o maior valor eh: %d\n",num1);
    }

    else if (num2 > num1){
        printf("o maior valor eh: %d\n",num2);
    }

    else{
        printf("o maior valor eh: %d\n",num2);  
    }
}

int main(){
    int num1;
    int num2;

    printf("digite o primeiro valor: \n");
    scanf("%d", &num1);

    printf("digite o segundo valor: \n");
    scanf("%d", &num2);


    retornaMaior(num1, num2);
    return 0;
}
