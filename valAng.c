#include <stdio.h>

int calculo(int *ang){
    float rad;
    float pi = 3.14;

    rad = *ang * pi /180;

    return rad;
}

int main(){
    int ang;
    float rad;

    printf("Digite um valor de angulo:\n");
    scanf("%d", &ang);

    rad = calculo(&ang);

    printf("O calculo do losango é:%f\n", rad);
}