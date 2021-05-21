#include <stdio.h>
#include <string.h>

/*
// void name(char nome[], char sobrenome[]){

    
//    strcat(nome, sobrenome);

//     return ;
// };
 */

int main(){
    char nome[30];
    //char sobrenome[20];
    //char nomeCmp;

    printf("Digite seu nome e sobrenome:\n");
    //gets(nome);
    fgets(nome, sizeof(nome), stdin);
    //printf("+++++%s %s", nome, sobrenome);
    //nome = getchar();
    //scanf("%s", &nome);

    //printf("Digite seu sobrenome:");
    //sobrenome = getchar();
    //scanf("%s", &sobrenome);

    //name(nome, sobrenome);

    printf("Seu nome completo é: %s\n", nome);
}