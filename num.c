#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    double raiz1;
    double raiz2;
    double raiz3;
    double dif;
    double seno;

    printf("Digite os numeros desejados:");
    scanf("%d %d", &num1, &num2);

    raiz1 = sqrt(num1);
    raiz2 = sqrt(num2);
    raiz3 = sqrt(raiz1 + raiz2);
    dif = num1 - num2;
    seno = sin(dif);

    printf("Soma dos numeros: %d\n", (num1 + num2));
    printf("O produto do primeiro número pelo quadrado do segundo: %lf\n", (num1 + raiz2));
    printf("O quadrado do primeiro número: %lf\n", raiz1);
    printf("A raiz quadrada da soma dos quadrados: %lf\n", raiz3);
    printf("O seno da diferença do primeiro número pelo segundo: %lf\n", seno);
    //printf("O módulo do primeiro número: %d\n", (num1 + num2));
}