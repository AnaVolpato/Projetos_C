#include <stdio.h>
#include <string.h>
 
 int main(int argc, char const *argv[])
 {
     char valorA[1000];
     char valorB[1000];
     int tamA;
     int tamB;
     int position;
     int i;

    for(int i=1; i <=1000; i++){

    printf("valor a:");
    scanf("%s",valorA);

    printf("valor b:");
    scanf("%s",valorB);

    tamA=strlen(valorA);
    tamB=strlen(valorB);

    position = tamA - tamB;
    //position = valorB[1]

    if (!strcmp(&valorA[position],valorB))
    {
        printf("CORRESPONDE\n");
    }
    else{
        printf("NAO CORRESPONDE\n");
    }
    }

     return 0;
 }
 