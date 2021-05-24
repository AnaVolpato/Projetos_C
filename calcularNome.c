#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = {0x00};
    int tamanho = 0;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    tamanho = strlen(nome);

    // printf("%d"), tamanho;
    printf("Seu nome tem %d letras\n", tamanho-2);
}