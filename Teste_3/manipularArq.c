#include <stdio.h>

int main(){
    FILE *pont_arq1;
    FILE *pont_arq2;
    char retorno[10];

    pont_arq1 = fopen("arquivo1.txt", "r");
    pont_arq2 = fopen("arquivo2.txt", "w");

    //pegar caracter por caracter
    // while((retorno = fgetc(pont_arq1)) != EOF){
    //     fprintf(pont_arq2, "%c", retorno);
    // }

    while(fgets(retorno, 1024, pont_arq1)){
        fprintf(pont_arq2, "%s", retorno);
    }
        
    printf("Dados gravados com sucesso!\n");

    fclose(pont_arq1);
    fclose(pont_arq2);
    return 0;

}