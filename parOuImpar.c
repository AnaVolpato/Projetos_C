#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    // printf("num = %d", num);
    if (num <= -32767 || num >= 32767)
    {
        printf("Numero inválido!\n");
        return 0;
    }
    
    if(num%2==0)
    {
        printf("Par\n");
    }
    else
    printf("Impar\n");

    return 0;

}

