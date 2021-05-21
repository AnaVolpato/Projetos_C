#include <stdio.h>

int media(int nota1, int nota2){
    int total;

    total =  (nota1 + nota2) /2;

    return total;
}

int main(){
    int nota1;
    int nota2;
    int total;
    
    printf("Digite a primeira nota:\n");
    scanf("%i", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%d", &nota2);

    total = media(nota1, nota2);

    printf("A media das notas é:%d\n", total);
}