#include <stdio.h>
#include "isoParserUtils.h"

int bits(int bit){
    switch (bit)
    {
    case 1:    printf("\n%d    B    32   Bitmap",bit);                                        return 32; 
    case 3:    printf("\n%d    N    6    Código de processamento",bit);                       return 6; 
    case 4:    printf("\n%d    N    12   Valor da transação",bit);                            return 12; 
    case 7:    printf("\n%d    N    10   Data e hora (YYMMDDhhmm)",bit);                      return 10; 
    case 11:   printf("\n%d   N    6    NSU do terminal",bit);                                return 6;  
    case 12:   printf("\n%d   N    6    Hora local da transação (hhmmss)",bit);               return 6;  
    case 13:   printf("\n%d   N    4    Data local da transação (MMDD)",bit);                 return 4;  
    case 18:   printf("\n%d   N    3    Código de país do adiquirente",bit);                  return 4;  
    case 19:   printf("\n%d   N    3    Código de país do adiquirente",bit);                  return 3;  
    case 22:   printf("\n%d   N    3    Modo de entrada",bit);                                return 3;  
    case 23:   printf("\n%d   N    3    PAN Sequence Number",bit);                            return 3;  
    case 38:   printf("\n%d   N    6    NSU do HOST",bit);                                    return 6;  
    case 39:   printf("\n%d   AN   2    Código de resposta",bit);                             return 2;  
    case 41:   printf("\n%d   AN   16   Numero de série do terminal",bit);                    return 16; 
    case 42:   printf("\n%d   N    20   CNPJ/CPF do estabelecimento comercial",bit);          return 20; 
    case 49:   printf("\n%d   N    3    Código da Moéda",bit);                                return 3;  
    case 52:   printf("\n%d   B    16   PIN Block",bit);                                      return 16; 
    case 55:   printf("\n%d   AN   LLL  Tags EMV",bit);                                       return 46; 
    case 60:   printf("\n%d   ANS  LLL  Dados de confirmação da ultima transação     ",bit);  return 46; 
    case 61:   printf("\n%d   ANS  LLL  Informações do Ponto de Venda",bit);                  return 46; 
    case 62:   printf("\n%d   ANS  LLL  Mensagens do HOST/Comprovante Lojista",bit);          return 46; 
    case 63:   printf("\n%d   ANS  LLL  Dados adicionais da transação",bit);                  return 46; 
    case 67:   printf("\n%d   N    2    Numero de parcelas",bit);                             return 2;  
    case 70:   printf("\n%d   N    3    Código de gerenciamento",bit);                        return 3;  
    case 90:   printf("\n%d   AN   LLL  Dados da transação Original",bit);                    return 46; 
    case 118:  printf("\n%d  ANS  LLL  Forma de Pagamento ",bit);                             return 46; 
    case 120:  printf("\n%d  AN   LLL  Detalhamento de Versões",bit);                         return 46; 
    case 121:  printf("\n%d  ANS  LLL  Dados para criptografia",bit);                         return 46; 
    case 123:  printf("\n%d  ANS  LLL  Dados do SIM Card ",bit);                              return 46; 
    case 124:  printf("\n%d  ANS  LLL  Comprovante do Cliente",bit);                          return 46; 
    case 125:  printf("\n%d  B    LLL  Dados sensiveis da transação ",bit);                   return 46; 
    case 127:  printf("\n%d  B    LLL  NSU adiquirente  ",bit);                               return 46; 
    default: 
        break;
    }
}
