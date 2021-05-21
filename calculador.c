#include <stdio.h>
#include <stdlib.h>

int soma(int n1,int n2){
    int total;

    total = n1 + n2;

    return total;
}

int subtracao(int num1,int num2){
    int total;

    total = num1 - num2;

    return total;
}

int main(){
    int numero1;
    int numero2;
    int totalSoma;
    int totalSubtracao;
    char sinal;

    /* CHAR COM NEGAÇÃO OU QUE SO ACEITA CERTOS CARACTERES 
    char str[32];
      int pInt = &numero1;

    scanf("%[^\n]s", str);

    printf("%s\n", str);

    return 0;
*/

// %d %c

    scanf("%d", &numero1);
      //setbuf(stdin, NULL);    
    //gets(sinal);
    //sinal = (char)getchar();
    scanf(" %c", &sinal);
    //setbuf(stdin, NULL);
    scanf("%d", &numero2);
    //setbuf(stdin, NULL);

    totalSoma = soma(numero1, numero2);
    totalSubtracao = subtracao(numero1, numero2);

    //printf(">>>>>>>>>>>%c\n", sinal);


    if (sinal == '+'){
        printf("Total = %d\n", totalSoma);
    }
    if (sinal == '-'){
        printf("Total = %d\n", totalSubtracao);
    }
    // else{
    // printf("Sinal incorreto.\n");
    // }


//--------------------------------------------------

        // switch (sinal)
    // {
    // case '+':
    //     printf("%d\n", totalSoma);
    //     break;
    // case '-':
    //     printf("%d\n", totalSubtracao);
    //     break;
    
    // default:
    // printf("Numero invalido!!!!!\n");
    //     break;
    // }

    return 0;
}