#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *pont_arq;
    int retorno;
    char nomeArq[50] = {0x00};
    int tamanhoNomeArq = 0;
    int a = 0;
    int p = 0;
    char nomeArqAtualizado[50] = {0x00};
    char stringArq[100] = {0x00};
    int tamanhoString = 0;
    char stringArqAtualizado[100] = {0x00};

    memset(stringArq, 0, sizeof(stringArq));
    memset(stringArqAtualizado, 0, sizeof(stringArqAtualizado));

    //solicitando o nome do arquivo
    printf("Digite o nome do arquivo que sera inserida a string: ");
    fgets(nomeArq, sizeof(nomeArq), stdin);
    tamanhoNomeArq = strlen(nomeArq);

    //tirando o '\n' do fgets
    for(a = 0; a <= tamanhoNomeArq; a++){
        if(nomeArq[a] != '\n'){
            nomeArqAtualizado[p] = nomeArq[a];
            p++;
        }
    }
    // printf("nome: [%s]", nomeArqAtualizado);

    //abrindo arquivo para gravação
    //a == acessar e acresentar string
    //r+ == acessar arquivo e alterar a string que ja existe 
    //w == criar arquivo || alterar os dados do arquivo ja existente
    pont_arq = fopen(nomeArqAtualizado, "w");
    //verificando existencia do arquivo
    if(pont_arq == NULL){
        printf("ERRO: arquivo não encontrado!\n");
        exit(1);
    }

    //solicitando a string a ser inserida
    printf("Digite a string que deseja inserir: ");
    fgets(stringArq, sizeof(stringArq), stdin);
    tamanhoString = strlen(stringArq);

    p = 0;
    for(a = 0; a <= tamanhoString; a++){
        if(stringArq[a] != '\n'){
            stringArqAtualizado[p] = stringArq[a];
            p++;
        }
    }
    // printf("nome: [%s]", stringArq);


    //gravando strings para arquivo 
    retorno = fputs(stringArqAtualizado, pont_arq);

    //verificando se os dados foram gravados com sucesso
    if(retorno == EOF){
        printf("Erro ao tentar gravar dados! Tente novamente.\n");
    }
    else {
        printf("Dados gravados com sucesso!\n");
    }

    //fechando arquivo 
    fclose(pont_arq);

    return 0;
}