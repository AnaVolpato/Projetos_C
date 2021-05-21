#include <stdio.h>

int imc(int peso, float altura){
    int totalImc;

    totalImc = peso / (altura * altura);

    return totalImc;
}

int main(){
    int peso;
    float altura;
    int total;

    printf("Calcule seu IMC\n");
    printf("Peso:\n");
    scanf("%d", &peso);

    printf("Altura:\n");
    scanf("%f", &altura);

    total = imc(peso, altura);

    printf("Seu imc é:%d\n", total);

}
