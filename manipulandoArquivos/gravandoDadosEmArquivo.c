#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------------------
//GRAVANDO STRING::::::: 
int main(){
    //criando variavel ponteiro para o arquivo
    FILE *ponteiro_arquivo;
    //variavel do tipo atring para armazenar
    char palavra[50] = {0x00};

    //abrindo o arquivo com o tipo de abertura w
    ponteiro_arquivo = fopen("ARQUIVO", "w"); //'ARQUIVO' == nome do arquivo de criação e extensão

    //testando se o arquivo realmente foi criado
    if(ponteiro_arquivo == NULL){
        printf("Não foi possivel abrir/criar o arquivo!\n");
        exit (0);
    }
    
    printf("Escreva uma palavra para testar a gravação no arquivo: ");
    scanf("%s", palavra);

    //usando fprintf para armazenar a string no arquivo
    fprintf(ponteiro_arquivo, "%s", palavra);

    //fechando o arquivo
    fclose(ponteiro_arquivo);

    printf("Dadoos gravados com sucesso!");

    getch();
    return 0;
}

//-----------------------------------------------------------
//GRAVANDO CARACTER POR CARACTER::::::: 
int main(){
    
}