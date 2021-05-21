#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subString(char entrada[], char saida[], int inicio, int tamanho){
    strncpy(saida, entrada + inicio, tamanho);
}

void tlvdois(char codigo[100]){
    char primeirosNumeros[4] = {0x00};
    char tag[5] = {0x00};
    char tamanho[6] = {0x00};
    char valor[100] = {0x00};
    int posi = 3;
    int tamanhoTotal = 0;
    int soma = 0;
    int tam = 0;

    subString(codigo, primeirosNumeros, 0, 3);

    tamanhoTotal = atoi(primeirosNumeros);


    while(soma < tamanhoTotal){

        subString(codigo, tag, posi+=tam, 4);
        printf("%s ", tag);
        memset(tag, 0, sizeof(tag));

        subString(codigo, tamanho, posi+=4, 5);
        printf("%s ", tamanho);


        tam = atoi(tamanho);

        subString(codigo, valor, posi+=5, tam);
        printf("[%s] \n", valor);
        memset(valor, 0, sizeof(valor));
        memset(tamanho, 0, sizeof(tamanho));


        soma += tam + 9;

    }
}

int main(){
    char tlv[] = "113000100026abcdefghijklmnopqrstuvwxyz0002000109876543210000300035Ana Beatriz Volpato Domingues Souto00040000719 anos";

    tlvdois(tlv);
}