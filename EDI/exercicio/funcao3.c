#include <stdio.h>

int retornaMaior(int num1,int num2){
    if(num1 > num2){
        return num1;
    }

    else if (num2 > num1){
        return num2;
    }

    else{
        return num2;
    }
}

void retornaMaiorde3(int num1, int num2, int num3){
    int provisorio = retornaMaior(num1, num2);

    if(provisorio > num3){
        printf("maior valor: %d", provisorio);
    }

    else if(num3 > provisorio){
        printf("maior valor: %d", num3);
    }
}

int main(){
    int num1, num2, num3;

    printf("digite num1: \n");
    scanf("%d", &num1);
    printf("digite num2: \n");
    scanf("%d", &num2);
    printf("digite num3: \n");
    scanf("%d", &num3);


    retornaMaiorde3(num1, num2, num3);
    return 0;

}