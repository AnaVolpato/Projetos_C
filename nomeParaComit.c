#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = {0x00};
    int tamanhoNome = 0;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    tamanhoNome = strlen(nome);
    printf("Seu nome tem %d letras",  tamanhoNome);
}