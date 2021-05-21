#include <stdio.h>

int main(){
    int somaDeNumeros(int num1, int num2);
    int a, b, soma;

    printf("Digite dois numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    soma = somaDeNumeros(a, b);

    printf("A soma é: %d\n", soma);
}

    int somaDeNumeros(int num1, int num2){
        int valorAbsoluto (int x);

        if(num1 < 0){
            num1 = valorAbsoluto(num1);
        }
        if(num2 < 0){
            num2 = valorAbsoluto(num2);
        }
        return num1 + num2;
}

    int valorAbsoluto(int x){
        return x*-1;
}