#include <stdio.h>

enum mes{
    janeiro = 1, 
    fevereiro = 2, 
    marco = 3, 
    abril = 4, 
    maio = 5, 
    junho = 6, 
    julho = 7, 
    agosto = 8, 
    setembro = 9, 
    outubro = 10, 
    novembro = 11, 
    dezembro = 12};

int main(){
    int mes ;

    printf("Digite o mes:\n");
    scanf("%d", &mes);

    enum mes  {janeiro, fevereiro, marco, abril, maio, junho, agosto, setembro, outubro, novembro, dezembro};

    printf("mes:%d\n", mes);
}