#include <stdio.h>
#include <stdlib.h>

void main(){
    int nome, imp;
    float salario;

    printf("Informe seu nome:\n");
    scanf("%d", &nome);
    printf("informe seu salario:\n");
    scanf("%f", &salario);

    while ( salario < 1300){
        printf("Nome:%d\t salario:%f");
    }
    
}