#include <stdio.h>
#include <string.h>

void renameArq (char string1[], char string2[]){
    int result;

    result = rename(string1, string2);

    if (result == 0)
        printf("Arquivo renomeado com sucesso!\n");
    else 
        printf("Erro ao renomear arquivo: permissao negada.\n");

}

int main(){
    char oldname[50] = {0x00};
    char oldname2[50] = {0x00};
    char newname[50] = {0x00};
    char newname2[50] = {0x00};
    int tamanhoOldname = 0;
    int tamanhoNewname = 0;
    int a = 0;
    int p = 0;

    // memset(oldname, 0, sizeof(oldname));
    printf("Digite o nome atual do arquivo: ");
    fgets(oldname, sizeof(oldname), stdin);
    tamanhoOldname = strlen(oldname);

    //tirando o '\n' do fgets
        for(a = 0; a <= tamanhoOldname; a++){
            if (oldname[a] != '\n'){
                oldname2[p] = oldname[a];
                p++;
            }
        }

    printf("\nDigite o novo nome desejado: ");
    fgets(newname, sizeof(newname), stdin);
    tamanhoNewname = strlen(newname);

    //tirando o '\n' do fgets (antes zerando o p)
    p = 0;
        for(a = 0; a <= tamanhoNewname; a++){
            if (newname[a] != '\n'){
                newname2[p] = newname[a];
                p++;
            }
        }

    renameArq(oldname2, newname2);

    return 0;
}