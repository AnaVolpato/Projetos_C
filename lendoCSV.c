#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char CSV[5][50]= {"Teste", "12345", "teste", "55555", "abcde"};
    int i = 0;
    FILE *pontArq;
    int retorno;

    for(i = 0; i < 4; i++){
        CSV[i][5] = ';'; 
    }

    for(i = 1; i < 5; i++){
        strcat(CSV[0], CSV[i]);
    }

    printf("%s\n", CSV[0]);

    pontArq = fopen("CSVTestee.c", "a+");
    // retorno = fputs(CSV[0], pontArq);
    retorno = fprintf(pontArq, "%s\n", CSV[0]);
    fclose(pontArq);

    return 0;
}