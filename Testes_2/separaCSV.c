#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//r: Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.

//w: Permissão de abertura para escrita (gravação). Este código cria o arquivo caso ele não exista, e caso o mesmo exista ele recria o arquivo novamente fazendo com que o conteúdo seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

//a: Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado

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
        CSV2[i][tamCSV2[i]] = ';'; 
    }

    for(i = 1; i < tamanho2; i++){
        strcat(CSV2[0], CSV2[i]);
    }

    printf("%s\n", CSV2[0]);

    pontArq = fopen("CSVTesTe3.csv", "a+");
    // retorno = fputs(CSV[0], pontArq);(com fputs nao da p pular linha a cada 'printf')
    retorno = fprintf(pontArq, "%s\n", CSV2[0]);
    fclose(pontArq);
}

int main(){
    char CSV[][50]= {"Teste!", "12345", "teste", "5", "abc", "98765", "fghij"};
    int i;
    //Calcular tamanho de vetor
    int tamanho = sizeof(CSV)/sizeof(CSV[0]);
    int tamCSV[tamanho];

    for(i = 0; i < tamanho; i++){
        tamCSV[i] = strlen(CSV[i]);
    }
    
    funCSV(CSV, tamanho, tamCSV);

    return 0;
}