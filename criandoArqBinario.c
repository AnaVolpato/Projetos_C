#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch [15] = "Teste Geral";
    int valor [15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FILE *ptarq; 

    ptarq = fopen ("binario.bin", "wb"); // se nao abriu, cria o arquivo

    if(ptarq != NULL){
        printf("\nArquivo binario.bin criado com sucesso!\n");
    }
    else{
        printf("\nErro: arquivo binario.bin não foi aberto.\n");
        exit(0);
    }

    //gravando dados na arquivo usando a funcao fwrite 
    fwrite (ch, sizeof(char), 15, ptarq);
    fwrite (valor, sizeof(int), 15, ptarq);

    //fechando o arquivo
    fclose (ptarq);

    return 0;
}
