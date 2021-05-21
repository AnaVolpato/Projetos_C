#include <stdio.h>

int calculo(int *maior, int *menor){
    int area;

    area = *maior * *menor /2;

    return area;
}

int main(){
    int maior;
    int menor;
    int area;

    printf("Digite o maior lado do losango:\n");
    scanf("%d", &maior);
    printf("Digite o menor lado do losango:\n");
    scanf("%d", &menor);

    area = calculo(&menor, &maior);

    printf("O calculo do losango é:%d\n", area);
}