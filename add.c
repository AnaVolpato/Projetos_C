#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1; 
    int valor2; 
    int total;

    printf("Informe um valor:");
    scanf("%d", &valor1);
    printf("Informe um valor:");
    scanf("%d", &valor2);

    total = valor1 + valor2;

    if (total >10)
        printf("Total:%d\n", total);
    else 
        printf("Resultado menor que 10\n");
}