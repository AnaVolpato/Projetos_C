#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float numero;
    float raiz;

    printf("Digite um numero:\n");
    scanf("%f", &numero);

    raiz = sqrt(numero);

    printf("A raiz no numero é:%f\n", raiz);
}