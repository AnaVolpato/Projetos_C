#include <stdio.h>

int dobro(int valor){
    int total;

    total = valor + valor;

    return total;
}

int main(){
    int valor;
    int total;

    scanf("%i", &valor);

    total = dobro(valor);
    
    printf("Total:%i\n", total);
}