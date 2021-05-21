#include <stdio.h>
#include <stdlib.h>

    struct cadastro{
    char name[50];
    char ender[100];
    int idade;
};

int main(){


    struct cadastro pessoas[3];

    int i;

    for (i=0; i <=1; i++){

    printf("Informe o nome:\n");
    fgets(pessoas[i].name, sizeof(pessoas[i].name), stdin);

    printf("Informe o endereço:\n");
    fgets(pessoas[i].ender, sizeof(pessoas[i].ender), stdin);

    printf("Informe a idade:\n");
    scanf("%i", &pessoas[i].idade);
    fflush(stdin);
    getchar();
    }
    for (i=0; i<=1; i++){
        printf(" Nome: %s Endereço: %s Idade: %d anos\n", pessoas[i].name, pessoas[i].ender, pessoas[i].idade);
    }
    return(0);
}
