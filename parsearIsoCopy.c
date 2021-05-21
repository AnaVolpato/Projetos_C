#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "isoParserUtils.h"


void binario(int num, char zAux[]){
    int k = 0;
    int aux = 0;
    int bin[5];
    
    for (aux = 3; aux >=0; aux--)
    {
        if (num % 2 == 0) {
            bin[aux] = 0;
        } else {
            bin[aux] = 1;
        } 

        num = num / 2;
    }

    for (aux = 0; aux < 4; aux++, k++) {
        zAux[k] = bin[aux] + 48;
    }
}

int tlv(char tst[50]){
    char primeirosNumeros[4] = {0x00};
    int tamTotal = 0;

    strncpy(primeirosNumeros, tst + 0, 3);

    tamTotal = atoi(primeirosNumeros);

    return tamTotal;
}

int main(){
    char ISO[5000] = {0x00};
    char ISO_2[4000] = {0x00};
    int tamanhoTotalIso = 0;
    int tamanhoTotalIso_2 = 0;
    char MTI[4] = {0x00};
    char bitmap[50] = {0x00};
    char bitmapHex[3] = {0x00};
    int tam = 0;
    int tamDois = 0;
    int tamanhoTotal = 0;
    int i = 0;
    int j = -1;
    int l = 0;
    int numeroInt;
    int bin[5];
    int aux;
    char zAux[150] = {0x00};
    int k = 0;
    int tamanhoBinario = 0;
    int m = -1;
    int dados[100] = {0x00};
    int n;
    int tamanhos[50] = {0x00};
    char conteudo[500] = {0x00};
    int a = 4;
    int iso_2 = 0;
    int iso = 0;
    int h;
    char Binario[150] = {0x00};

    puts("Insira a mensagem ISO8583:");
    fgets(ISO, 5000, stdin);
    tamanhoTotalIso = strlen(ISO);

    strncpy(ISO_2, ISO + 4, tamanhoTotalIso);
    strncpy(MTI, ISO, 4);

    iso_2 = strlen(ISO_2);
    iso = iso_2;

    printf("\nMTI: %s\n", MTI);
    if(MTI == "0202" || MTI == "0212"){
        strncpy(bitmap, ISO + 4, 16);
    }
    else{
        strncpy(bitmap, ISO + 4, 32);
    }
    printf("BITMAP: %s\n", bitmap);
    tamanhoTotal = strlen(bitmap);

    printf("BITMAP HEX: ");

    while (tam < (tamanhoTotal/2)){

        strncpy(bitmapHex, bitmap + i, 2);
        printf("%s ", bitmapHex);
        i+=2;
        tam ++;
    }
    
    printf("\n");

    printf("BITMAP BIN: ");
    h=0;
    while(tamDois < tamanhoTotal){
        switch (bitmap[j+=1])
        {
        case 'a': case 'A': numeroInt = 10; break;
        case 'b': case 'B': numeroInt = 11; break;
        case 'c': case 'C': numeroInt = 12; break;
        case 'd': case 'D': numeroInt = 13; break;
        case 'e': case 'E': numeroInt = 14; break;
        case 'f': case 'F': numeroInt = 15; break;
        case '1': numeroInt = 1; break;
        case '2': numeroInt = 2; break;
        case '3': numeroInt = 3; break;
        case '4': numeroInt = 4; break;
        case '5': numeroInt = 5; break;
        case '6': numeroInt = 6; break;
        case '7': numeroInt = 7; break;
        case '8': numeroInt = 8; break;
        case '9': numeroInt = 9; break;
        case '0': numeroInt = 0; break;
        default: 
        break;
        }

        binario(numeroInt, zAux);
        printf("%s ", zAux);
        strncat(Binario, zAux, 4);

        h++;
        tamDois++;
    }

    tamanhoBinario = strlen(Binario);

    printf("\nDADOS PRESENTES: ");

    h = 0;
    while (l < tamanhoBinario){
        if (Binario[h] == '1' ){
            printf("%d ", h+1);
            dados[m+=1] = h+1;
        }
        h++;
        l++;
    }

    printf("\n\nBIT TIPO TAM  DESCRIÇÃO");

    n=0;
    while(n <= m){
        tamanhos[n] = bits(dados[n]);
        n++;
    }

    printf("\n");
    printf("\n");
    printf("CONTEUDO\n");

    m = 0;
    while (m <= n)
    {   // memset = limpar variaveis 
        memset (conteudo, 0, sizeof(conteudo));
        strncpy(conteudo, ISO + a, tamanhos[m]);

        if (tamanhos[m] == 46){
            tamanhos[m] = tlv(conteudo)+3;
            memset (conteudo, 0, sizeof(conteudo));

            strncpy(conteudo, ISO + a, tamanhos[m]);
            printf("%s\n", conteudo);
        }
        else
            printf("%s\n", conteudo);

        a = a + tamanhos[m];
        m++;
    }
}