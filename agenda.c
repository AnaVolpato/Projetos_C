#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct {
//     char Nome[30];
//     char Endereco[100];
//     char Fone[10];
//     long int CEP;
// } contato;

// contato setcontato(char nome[30], char endereco[100], char fone[10], long int CEP){
//     contato C;

//     nome = C.Nome;
//     endereco = C.Endereco;
//     fone = C.Fone;
//     CEP = C.CEP;

//     scanf("%s", &nome, &endereco, &fone, &CEP);

//     return C;
// }

// void imprimeContato(contato C){
//     printf("Nome: %s\n Endereço: %s\nFone: %s\n Cep: %li\n", C.Nome, C.Endereco, C.Fone, C.CEP);
// }

// int main()
// {
//     contato Joao;

//     Joao = setcontato(ana,ruamachadinho,9999999,000000); // atribui o retorno da função a uma variável struct
//     imprimecontato(Joao);
//    return 0;

// }

int main(){
    struct contatos{
        char Nome[30];
        char Endereco[100];
        int Fone;
        int CEP;
    };
    struct contatos contato[100] = {0x00};
    int opcao;
    int i = 0;
    int j = 0;
    //int opcaoDois;

INIT_LIST:

    printf("\t---------AGENDA ELETRONICA---------\t\n\n");
    printf("Pressione 1 se deseja cadastrar um novo contato.\n");
    printf("Pressione 2 se deseja mostrar a lista de contatos ja cadastrados.\n");
    printf("Pressione 3 se deseja finalizar.\n");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
        case 1:
            
            printf("Cadatrar novo contato:\n\n");
            setbuf(stdin, NULL);
            printf("Nome:\n");
            fgets(contato[i].Nome, sizeof(contato[i].Nome), stdin);
            setbuf(stdin, NULL);
            printf("Endereço:\n");
            fgets(contato[i].Endereco, sizeof(contato[i].Endereco), stdin);
            setbuf(stdin, NULL);
            printf("Fone:\n");
            scanf("%d", &contato[i].Fone);
            printf("CEP:\n");
            scanf("%d", &contato[i].CEP);

            // i++ / i += 1 / i = i + 1/ <- mesma coisa
            i++;
        goto INIT_LIST;
            //printf("");

        break;
    
        case 2:
            printf("\t-----------------CONTATOS-----------------\t\n");
            if (i >= 1){
                for(j = 0; j < i; j++){
                    printf("Nome: %sEndereço: %sFone: %d\nCep: %d\n\n", contato[j].Nome, contato[j].Endereco, contato[j].Fone, contato[j].CEP);
                }
            }
            else 
                printf("\nNÃO EXISTEM CONTATOS CADASTRADOS.\n\n");
            
            // printf("Pressione 1 para voltar ao menu inicial ou pressione 3 para finalizar.\n");
            // scanf("%d", &opcaoDois);
            // if (opcaoDois = 1)
                goto INIT_LIST;
        break;
    
    default:
        break;
    }

}