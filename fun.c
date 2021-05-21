#include <stdio.h>
#include <string.h>

void funOne(char helo[], char nome[]){

    //strcpy (helo, "OIIIIIIIIIIIIIIIIII");
    //printf("%s\n", helo);
    //memset (helo, 0, 7);
    strcpy (helo, "Hello ");
    strcat(helo, nome);
    //printf("%s\n", helo);
    return;
}

int main(){
    char nome[20];
    char helo[20];
    
    printf("Digite seu nome:");
    scanf("%s", nome);

    funOne(helo, nome);

    printf("Mensagem:%s\n", helo);
}