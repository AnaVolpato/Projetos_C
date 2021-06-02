#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char serie[50] = {0x00};
    char serie_4[5] = {0x00};
    char senha_string[50] = {0x00};
    char senha_4[5] = {0x00};
    int senha = 0;
    int serieNumero = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;
    int tam = 0;
    char um [5]= "9";
    char dois [5] = "96";
    char tres [5]= "967";
    char quatro [5]= "9674";

    printf("Digite o numero de serie do POS: ");
    scanf("%s", serie);
    
    tam = strlen(serie);

    strncpy(serie_4, serie + (tam - 4), 4);
    // printf("%s", serie_4);

    serieNumero = atoi(serie_4);

    printf("Digite o dia atual: ");
    scanf("%d", &dia);

    printf("Digite o mes atual: ");
    scanf("%d", &mes);

    printf("Digite o ano atual (MODO AA): ");
    scanf("%d", &ano);

    senha = serieNumero * dia + (dia * mes) + (3 * ano);

    sprintf(senha_string, "%d", senha);

    tam = 0;
    tam = strlen(senha_string);
    printf("\n[%d]\n", tam);

    if(tam > 4){
        strncpy(senha_4, senha_string + (tam - 4), 4);
        printf("\nSENHA VARIAVEL POS: %s\n", senha_4);
    }
    else if(tam == 3){
        strcat(um, senha_string);
        printf("\nSENHA VARIAVEL POS: %s\n", um);
    }
    else if(tam == 2){
        strcat(dois, senha_string);
        printf("\nSENHA VARIAVEL POS: %s\n", dois);
    }
    else if(tam == 1){
        strcat(tres, senha_string);
        printf("\nSENHA VARIAVEL POS: %s\n", tres);
    }
    else if(tam == 0){
        strcat(quatro, senha_string);
        printf("\nSENHA VARIAVEL POS: %s\n", quatro);
    }
    else{
        strncpy(senha_4, senha_string, 4);
        printf("\nSENHA VARIAVEL POS: %s\n", senha_4);
    }

    return 0;
}
