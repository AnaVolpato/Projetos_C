#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int separarData(char data[], int num1, int num2){
    int i = 0;
    char dataA[5] = {0x00};

    strncpy(dataA, data + num1, num2);    
    i = atoi(dataA);

    return i;
}

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
    char data[11] = {0x00};
    char ano_string[5] = {0x00};
    char ano_string2[3] = {0x00};

    printf("Digite o numero de serie do POS: ");
    scanf("%s", serie);
    
    tam = strlen(serie);

    strncpy(serie_4, serie + (tam - 4), 4);

    serieNumero = atoi(serie_4);

    printf("Digite a data atual (MODELO DD/MM/AAAA): ");
    scanf("%s", data);

    dia = separarData(data, 0, 2);
    mes = separarData(data, 3, 2);
    ano = separarData(data, 6, 4);

    sprintf(ano_string, "%d", ano);
    strncpy(ano_string2, ano_string + 2 , 2);

    ano = atoi(ano_string2);

    senha = serieNumero * dia + (dia * mes) + (3 * ano);

    sprintf(senha_string, "%d", senha);

    tam = 0;
    tam = strlen(senha_string);

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