#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subString(char entrada[], char saida[], int inicio, int tamanho){
    strncpy(saida, entrada + inicio, tamanho);
}

void binario(int num, char zAux[]){
    int k = 0;
    int aux = 0;
    int bin[5];
    
    for (aux = 3; aux >=0; aux--)
    {
        if (num % 2 == 0) {
            bin[aux] = 0;
        } else {
            bin[aux] = 1;
        } 

        num = num / 2;
    }

    for (aux = 0; aux < 4; aux++, k++) {
        zAux[k] = bin[aux] + 48;
    }
}

int tlv(char tst[50]){
    char primeirosNumeros[4] = {0x00};
    int tamTotal = 0;

    subString(tst, primeirosNumeros, 0, 3);

    tamTotal = atoi(primeirosNumeros);

    return tamTotal;
}

void xxxx(int m, int dados[], char ISO[]){
    int n;
    int a = 4;
    int tamanhos[50] = {0x00};
    char conteudo[500] = {0x00};

    n=0;
    while(n <= m){
        tamanhos[n] = bits(dados[n]);
        n++;
    }

    printf("\n");
    printf("\n");

    m = 0;
    while (m <= n)
    {   // memset = limpar variaveis 
        memset (conteudo, 0, sizeof(conteudo));
        strncpy(conteudo, ISO + a, tamanhos[m]);

        if (tamanhos[m] == 46){
            tamanhos[m] = tlv(conteudo)+3;
            memset (conteudo, 0, sizeof(conteudo));

            strncpy(conteudo, ISO + a, tamanhos[m]);
            printf("%s\n", conteudo);
        }
        else
            printf("%s\n", conteudo);

        a = a + tamanhos[m];
        m++;
    }
    printf("%s\n", conteudo);
}

int bits(int bit){
    switch (bit)
    {
    case 1:
        printf("\n%d    B   32   Bitmap",bit);
        return 32;
        break;
    case 3:
        printf("\n%d    N   6    Código de processamento",bit);
        return 6;
        break;
    case 4:
        printf("\n%d    N   12   Valor da transação",bit);
        return 12; 
        break;
    case 7:
        printf("\n%d    N   10   Data e hora (YYMMDDhhmm)",bit);
        return 10; 
        break;
    case 11:
        printf("\n%d   N   6    NSU do terminal",bit);
        return 6; 
        break;
    case 12:
        printf("\n%d   N   6    Hora local da transação (hhmmss)",bit);
        return 6; 
        break;
    case 13:
        printf("\n%d   N   4    Data local da transação (MMDD)",bit);
        return 4; 
        break;
    case 18:
        printf("\n%d   N   3    Código de país do adiquirente",bit);
        return 4; 
        break;
    case 19:
        printf("\n%d   N   3    Código de país do adiquirente",bit);
        return 3; 
        break;
    case 22:
        printf("\n%d   N   3    Modo de entrada",bit);
        return 3; 
        break;
    case 23:
        printf("\n%d   N   3    PAN Sequence Number",bit);
        return 3; 
        break;
    case 38:
        printf("\n%d   N   6    NSU do HOST",bit);
        return 6; 
        break;
    case 39:
        printf("\n%d   AN  2    Código de resposta",bit);
        return 2; 
        break;
    case 41:
        printf("\n%d   AN  16   Numero de série do terminal",bit);
        return 16;
        break;
    case 42:
        printf("\n%d   N   20   CNPJ/CPF do estabelecimento comercial",bit);
        return 20;
        break;
    case 49:
        printf("\n%d   N   3    Código da Moéda",bit);
        return 3;
        break;
    case 52:
        printf("\n%d   B   16   PIN Block",bit);
        return 16;
        break;
    case 55:
        printf("\n%d   AN  LLL  Tags EMV",bit);
        return 46;
        break;
    case 60:
        printf("\n%d   ANS LLL  Dados de confirmação da ultima transação     ",bit);
        return 46;
        break;
    case 61:
        printf("\n%d   ANS LLL  Informações do Ponto de Venda",bit);
        return 46;
        break;
    case 62:
        printf("\n%d   ANS LLL  Mensagens do HOST/Comprovante Lojista",bit);
        return 46;
        break;
    case 63:
        printf("\n%d   ANS LLL  Dados adicionais da transação",bit);
        return 46;
        break;
    case 67:
        printf("\n%d   N   2    Numero de parcelas",bit);
        return 2;
        break;
    case 70:
        printf("\n%d   N   3    Código de gerenciamento",bit);        
        return 3;
        break;
    case 90:
        printf("\n%d   AN  LLL  Dados da transação Original",bit);
        return 46;
        break;
    case 118:
        printf("\n%d  ANS LLL  Forma de Pagamento ",bit);
        return 46;
        break;
    case 120:
        printf("\n%d  AN  LLL  Detalhamento de Versões",bit);
        return 46;
        break;
    case 121:
        printf("\n%d  ANS LLL  Dados para criptografia",bit);
        return 46;
        break;
    case 123:
        printf("\n%d  ANS LLL  Dados do SIM Card ",bit);
        return 46;
        break;
    case 124:
        printf("\n%d  ANS LLL  Comprovante do Cliente",bit);
        return 46;
        break;
    case 125:
        printf("\n%d  B   LLL  Dados sensiveis da transação ",bit);
        return 46;
        break;
    case 127:
        printf("\n%d  B   LLL  NSU adiquirente  ",bit);
        return 46;
        break;
    default:
        break;
    }
}

int main(){
    char ISO[5000] = {0x00};
    char ISO_2[4000] = {0x00};
    int tamanhoTotalIso = 0;
    int tamanhoTotalIso_2 = 0;
    char MTI[4] = {0x00};
    char bitmap[50] = {0x00};
    char bitmapHex[3] = {0x00};
    int tam = 0;
    int tamDois = 0;
    int tamanhoTotal = 0;
    int i = 0;
    int j = 0;
    int l = 0;
    char numBitmap[2] = {0x00};
    int bitmapInt;
    int numeroInt;
    int bin[5];
    int aux;
    char zAux[150] = {0x00};
    int k = 0;
    int tamanhoBinario = 0;
    int m = -1;
    int dados[100] = {0x00};
    int n;
    int tamanho[30] = {0x00};
    int o = -1;
    int p = 0;
    int b = 0;
    int d = 0;
    int iso_2 = 0;
    int iso = 0;
    char f[999] = {0x00};
    int h;
    char Binario[150] = {0x00};

    puts("Insira a mensagem ISO8583:");
    fgets(ISO, 5000, stdin);
    tamanhoTotalIso = strlen(ISO);

    strncpy(ISO_2, ISO + 4, tamanhoTotalIso);
    strncpy(MTI, ISO, 4);

    iso_2 = strlen(ISO_2);
    iso = iso_2;

    printf("\nMTI: %s\n", MTI);

    strncpy(bitmap, ISO + 4, 32);
    printf("BITMAP: %s\n", bitmap);
    tamanhoTotal = strlen(bitmap);

    printf("BITMAP HEX: ");

    while (tam < (tamanhoTotal/2)){

        strncpy(bitmapHex, bitmap + i, 2);
        printf("%s ", bitmapHex);
        i+=2;
        tam ++;
    }
    
    printf("\n");

    printf("BITMAP BIN: ");
    h=0;
    while(tamDois < tamanhoTotal){
        switch (bitmap[j])
        {   
            case 'a' :
            case 'A':
                numeroInt = 10;
                break;
            case 'b':
            case 'B':
                numeroInt = 11;
                break;
            case 'c':
            case 'C':
                numeroInt = 12;
                break;
            case 'd':
            case 'D':
                numeroInt = 13;
                break;
            case 'e':
            case 'E':
                numeroInt = 14;
                break;
            case 'f':
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

        binario(numeroInt, zAux);
        printf("%s ", zAux);
        strncat(Binario, zAux, 4);

        tamDois++;
        j++;
    }

    tamanhoBinario = strlen(Binario);

    printf("\nDADOS PRESENTES: ");

    h = 0;
    while (l < tamanhoBinario){
        if (Binario[h] == '1' ){
            printf("%d ", h+1);
            dados[m+=1] = h+1;
        }
        h++;
        l++;
    }

    printf("\n\nBIT TIPO TAM  DESCRIÇÃO                                             CONTEUDO\n");

    xxxx(m, dados, ISO);

}