#include <stdio.h>
#include <string.h>

int main(){
    char string[50] = {0x00};
    char stringDois[50] = {0x00};
    // char stringC[50] = {0x00};
    int tamanhoString = 0;
    int p = 0;
    int a = 0;

    printf("Digite a string para ser convertida: ");
    fgets(string, sizeof(string), stdin);

    tamanhoString = strlen(string);
    // printf("[%d]\n", tamanhoString);

    for(p = (tamanhoString-1); p >= 0; p--){
            // printf("(%c)\n", string[p]);
            // printf("{%c}\n", stringDois[a]);
        if (string[p] != '\n'){
            stringDois[a] = string[p];
            // printf(">>%c\n", string[p]);
            // printf(">:%c\n", stringDois[a]);
            a++;
        }
        // printf(">%c", string[p]);
    }

        // printf("\n-%s", string);
        printf("[%s]\n", stringDois);
    
}