#include <stdio.h>
#include <string.h>

int main(){
    char frase[100] = {0x00};
    char espacos[100] = {0x00};
    int tamanhoFrase = 0;
    int tamanhoEspacos = 0;
    int a = 0;
    int b = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanhoFrase = strlen(frase);
    printf(">%d\n", tamanhoFrase);

    for(a = 0; a <= tamanhoFrase; a++){
        if(frase[a] == 'a'){
            espacos[b] = frase[a];
        }
        b++;
        printf("[%c] ", frase[a]);
        printf(">%c<\n ", espacos[b]);
    }

    tamanhoEspacos = strlen(espacos);
    printf(">%d\n", tamanhoEspacos);

    printf("(%c)", espacos[b]);
}