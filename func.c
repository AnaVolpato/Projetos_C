#include <stdio.h>

void soma(int *num1, int *num2){
    *num1 = 30;
    *num2 = 13;
}

int main(){
    int num1 = 10;
    int num2 = 22;

    printf("numero 1:%d\n", num1);
    printf("numero 2:%d\n", num2);

    soma (&num1, &num2);


    printf("numero 3:%d\n", num1);
    printf("numero 4:%d\n", num2);
}