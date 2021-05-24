#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = {0x00};

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    if (nome[0] == 'a' || nome[0] == 'A'){
        printf("Seu nome é: %s", nome);
    }
    else
        printf("%sNão comeca com 'A'\n", nome);
        

    return 0;
}
