#include <stdio.h>

int main(){
    float x;

    printf("Digite os metros:\n");
    scanf("%f", &x);

    printf("Em decimetros: %f\n Em centimetros: %f\n Em milimetros: %f", (x*10), (x*100), (x*1000));
}