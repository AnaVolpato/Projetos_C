#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funCSV(char CSV2[][50], int tamanho2, int tamCSV2[]){
    int i = 0;
    int j = 0;
    FILE *pontArq;
    int retorno;
    
    //TESTE PARA PEGAR SOMENTE OS INTEIROS DE TAMANHO DAS MENSAGENS DA CSV
    // for(i = 0; i < (tamanho2); i++){
    //     printf("dd:%d\n", tamCSV2[i]); 
    // }

    for(i = 0; i < (tamanho2-1); i++){
        for(i = 0; i < tamanho2; i++){
            CSV2[i][tamCSV2[i]] = ';'; 
        }
    }

    for(i = 1; i < tamanho2; i++){
        strcat(CSV2[0], CSV2[i]);
    }

    printf("%s\n", CSV2[0]);

    pontArq = fopen("CSVTesT.csv", "a+");
    // retorno = fputs(CSV[0], pontArq);
    retorno = fprintf(pontArq, "%s\n", CSV2[0]);
    fclose(pontArq);
}

int main(){
    char CSV[][50]= {"Teste!", "12345", "teste", "5", "abc", "98765", "fghij"};
    int i;
    int tamanho = sizeof(CSV)/sizeof(CSV[0]);
    int tamCSV[tamanho];

    for(i = 0; i < tamanho; i++){
        tamCSV[i] = strlen(CSV[i]);
    }
    
    funCSV(CSV, tamanho, tamCSV);

    return 0;
}