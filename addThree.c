#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;

    printf("Informe sua idade:\n");
    scanf("%d", &valor);

    if (valor < 18)
        printf("Menor de idade\n");
    else if (valor > 18 && valor < 69)
        printf("Maior de idade\n");  
    else if (valor > 69)
        printf("Idoso\n");

    /*switch (valor){
        case 1:
            valor < 18;
            printf("Menor de idade\n");
            break;
        case 2:
            valor > 18 < 69;
            printf("Maior de idade\n");
            break;
        case 3:
            valor > 69;
            printf("Idoso\n");
            break;
        default:
            printf("Invalido!\n");
    }*/
}