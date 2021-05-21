#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bits(char bit){
    char mensagem_1[] = "1    B   32   Bitmap";
    char mensagem_3[] = "3    N   6    Código de processamento";
    char mensagem_4[] = "4    N   12   Valor da transação";
    char mensagem_7[] = "7    N   10   Data e hora (YYMMDDhhmm)";
    char mensagem_11[] = "11   N   6    NSU do terminal";
    char mensagem_12[] = "12   N   6    Hora local da transação (hhmmss)";
    char mensagem_13[] = "13   N   4    Data local da transação (MMDD)";
    char mensagem_19[] = "19   N   3    Código de país do adiquirente";
    char mensagem_22[] = "22   N   3    Modo de entrada";
    char mensagem_23[] = "23   N   3    PAN Sequence Number";
    char mensagem_38[] = "38   N   6    NSU do HOST";
    char mensagem_39[] = "39   AN  2    Código de resposta";
    char mensagem_41[] = "41   AN  16   Numero de série do terminal";
    char mensagem_42[] = "42   N   20   CNPJ/CPF do estabelecimento commercia";
    char mensagem_49[] = "49   N   3    Código da Moéda";
    char mensagem_52[] = "52   B   16   PIN Block";
    char mensagem_55[] = "55   AN  LLL  Tags EMV";
    char mensagem_60[] = "60   ANS LLL  Dados de confirmação da ultima transação";
    char mensagem_61[] = "61   ANS LLL  Informações do Ponto de Venda";
    char mensagem_62[] = "62   ANS LLL  Mensagens do HOST/Comprovante Lojista";
    char mensagem_63[] = "63   ANS LLL  Dados adicionais da transação";
    char mensagem_67[] = "67   N   2    Numero de parcelas";
    char mensagem_70[] = "70   N   3    Código de gerenciamento";
    char mensagem_90[] = "90   AN  LLL  Dados da transação Original";
    char mensagem_118[] = "118  ANS LLL  Forma de Pagamento ";
    char mensagem_120[] = "120  AN  LLL  Detalhamento de Versões";
    char mensagem_121[] = "121  ANS LLL  Dados para criptografia";
    char mensagem_123[] = "123  ANS LLL  Dados do SIM Card ";
    char mensagem_124[] = "124  ANS LLL  Comprovante do Cliente";
    char mensagem_125[] = "125  B   LLL  Dados sensiveis da transação ";
    char mensagem_127[] = "127  AN  LLL  NSU adiquirente";

    switch (bit)
    {
    case 1:
        printf("\n%s", mensagem_1);
        break;
    case 3:
        printf("\n%s", mensagem_3);
        break;
    case 4:
        printf("\n%s", mensagem_4);
        break;
    case 7:
        printf("\n%s", mensagem_7);
        break;
    case 11:
        printf("\n%s", mensagem_11);
        break;
    case 12:
        printf("\n%s", mensagem_12);
        break;
    case 13:
        printf("\n%s", mensagem_13);
        break;
    case 19:
        printf("\n%s", mensagem_19);
        break;
    case 22:
        printf("\n%s", mensagem_22);
        break;
    case 23:
        printf("\n%s", mensagem_23);
        break;
    case 38:
        printf("\n%s", mensagem_38);
        break;
    case 39:
        printf("\n%s", mensagem_39);
        break;
    case 41:
        printf("\n%s", mensagem_41);
        break;
    case 42:
        printf("\n%s", mensagem_42);
        break;
    case 49:
        printf("\n%s", mensagem_49);
        break;
    case 52:
        printf("\n%s", mensagem_52);
        break;
    case 55:
        printf("\n%s", mensagem_55);
        break;
    case 60:
        printf("\n%s", mensagem_60);
        break;
    case 61:
        printf("\n%s", mensagem_61);
        break;
    case 62:
        printf("\n%s", mensagem_62);
        break;
    case 63:
        printf("\n%s", mensagem_63);
        break;
    case 67:
        printf("\n%s", mensagem_67);
        break;
    case 70:
        printf("\n%s", mensagem_70);
        break;
    case 90:
        printf("\n%s", mensagem_90);
        break;
    case 118:
        printf("\n%s", mensagem_118);
        break;
    case 120:
        printf("\n%s", mensagem_120);
        break;
    case 121:
        printf("\n%s", mensagem_121);
        break;
    case 123:
        printf("\n%s", mensagem_123);
        break;
    case 124:
        printf("\n%s", mensagem_124);
        break;
    case 125:
        printf("\n%s", mensagem_125);
        break;
    case 127:
        printf("\n%s", mensagem_127);
        break;
    
    default:
        break;
    }
    // return mensagem;
}

int main(){
    char bitmap[50] = {0x00};
    char bitmapHex[3];
    int tam = 0;
    int tamDois = 0;
    int tamanhoTotal = 0;
    int i = -2;
    int j = -1;
    int l = 0;
    char numBitmap[2] = {0x00};
    int bitmapInt;
    char posi[2];
    int numeroInt;
    int bin[5];
    int aux;
    char zAux[150] = {0x00};
    int k = 0;
    int tamanhoBinario = 0;
    int posit;
    char resp[50];
    int tamanho_Dados_Presentes;
    int m = -1;
    char dados[50] = {0x00};
    char n;


    printf("Insira o Bitmap da mensagem:\n");
    fgets(bitmap, 50, stdin);

    tamanhoTotal = strlen(bitmap);


    printf("\nBITMAP: %s\n", bitmap);
    printf("BITMAP HEX: ");

    while (tam < (tamanhoTotal/2)){

        strncpy(bitmapHex, bitmap + (i+=2), 2);
        printf("%s ", bitmapHex);

        tam ++;}
    
    printf("\n");

    printf("BITMAP BIN: ");

    while(tamDois < tamanhoTotal){
        switch (bitmap[j+=1])
        {
        case 'a':
            numeroInt = 10;
            break;
        case 'A':
            numeroInt = 10;
            break;
        case 'b':
            numeroInt = 11;
            break;
        case 'B':
            numeroInt = 11;
            break;
        case 'c':
            numeroInt = 12;
            break;
        case 'C':
            numeroInt = 12;
            break;
        case 'd':
            numeroInt = 13;
            break;
        case 'D':
            numeroInt = 13;
            break;
        case 'e':
            numeroInt = 14;
            break;
        case 'E':
            numeroInt = 14;
            break;
        case 'f':
            numeroInt = 15;
            break;
        case 'F':
            numeroInt = 15;
            break;
        case '1':
            numeroInt = 1;
            break;
        case '2':
            numeroInt = 2;
            break;
        case '3':
            numeroInt = 3;
            break;
        case '4':
            numeroInt = 4;
            break;
        case '5':
            numeroInt = 5;
            break;
        case '6':
            numeroInt = 6;
            break;
        case '7':
            numeroInt = 7;
            break;
        case '8':
            numeroInt = 8;
            break;
        case '9':
            numeroInt = 9;
            break;
        case '0':
            numeroInt = 0;
            break;
        
        default:
            break;
        }

        for (aux = 3; aux >=0; aux--)
            {
            if (numeroInt % 2 == 0)
                bin[aux] = 0;
            else 
                bin[aux] = 1;
            numeroInt = numeroInt / 2;
            }

        for (aux = 0; aux < 4; aux++, k++)

        zAux[k] = bin[aux] + 48;
        
        tamDois++;
    }
        
    printf("%s\n", zAux);

    tamanhoBinario = strlen(zAux);

    printf("DADOS PRESENTES: ");

    k = -1;
    while (l < tamanhoBinario){
        if (zAux[k+=1] == '1' ){
            printf("%d ", (k + 1));
            dados[m+=1] = (k + 1);
        }
        l++;
    }

    printf("\n\nBIT TIPO TAM  DESCRIÇÃO\n");


    tamanho_Dados_Presentes = strlen(dados);

    m=-1;
    while(n < tamanho_Dados_Presentes){
        bits(dados[m+=1]);
    n++;
    }
    printf("\n");
}