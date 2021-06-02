# include <stdio.h>
# include <stdlib.h>

int main(){
    //criando a variavel ponteiro para o arquivo 
    FILE *ponteiro_arquivo;

    //abrindo o arquivo
    ponteiro_arquivo = fopen("ARQUIVO", "a"); // 'ARQUIVO' == nome do arquivo de criação e extensão

    //fechando o arquivo
    fclose(ponteiro_arquivo);

    //caso nao sej apossivel abrir o arquivo
    if(ponteiro_arquivo == NULL){
        printf("Não foi possivel criar o arquivo!\n");
        exit (0);
    }

    //mensagem para o usuario
    else{
        printf("O arquivo foi criado com sucesso!");
    }

    system("pause");
    return 0;
}