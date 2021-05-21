#include <stdio.h> 
#include <string.h>

int main(){
    char string[50] = {0x00};
    char stringDois[50] = {0x00};
    int tamanhoString = 0;
    int a = 0;
    int b = 0;

    printf("Digite seu nome: ");
    fgets(string, sizeof(string), stdin);

    tamanhoString = strlen(string);
    // printf("[%d]\n", tamanhoString);

    for (a = 0; a<=tamanhoString; a++){
        if(string[a] != '\n'){
            switch (string[a])
            {
            case 'a':
            case 'A':
                break;
            case 'e':
            case 'E':
                break;
            case 'i':
            case 'I':
                break;
            case 'o':
            case 'O':
                break;
            case 'u':
            case 'U':
                break;
            default:
            // printf("\n\n>%c", string[a]);
            // printf("\n::%c", stringDois[b]);
            stringDois[b] = string[a];
            // printf("\n--%c", stringDois[b]);
            b++;
                break;
            }
        }
    }
    printf("Seu nome sem as vogais é: %s\n", stringDois);
}