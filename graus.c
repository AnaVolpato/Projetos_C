#include <stdio.h>

int Celsius(float graus){
    int Celsius;

    Celsius = (graus - 32.0) * (5.0/ 9.0);

    return Celsius;
}

int main(){
    float graus;
    float total;

    printf("Converta graus Fahrenheit em graus Celsius\n\n");
    printf("Digite graus Fahrenheit:\n");
    scanf("%f", &graus);

    total = Celsius(graus);

    printf("Graus em Celsius:%f\n", total);
}
