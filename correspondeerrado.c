#include <stdio.h>
#include <string.h>

int main()
{
    char valorA[1000], valorB[1000];

    printf("valor a:");
    scanf("%s",valorA);

    printf("valor b:");
    scanf("%s",valorB);


    if (!strncmp(valorA,valorB, 3))
    {
        printf("CORRESPONDE\n");
    }
    else{
        printf("NAO CORRESPONDE\n");
    }

    //if(resultado == 234)
    //{
    //  printf("CORRESPONDE\n");
    //}
    //else
    //{
    //  printf("NAO CORRESPONDE\n");
    //}


}