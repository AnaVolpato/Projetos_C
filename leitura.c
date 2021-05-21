#include <stdio.h>
#include <string.h>

void leitura(int num1, int num2, int num3){
    num1= num1 *2;
    num2= num2 *2;
    num3= num3 *2;
}

int main(){
    int num1;
    int num2;
    int num3;
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &num1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro valor:\n");
    scanf("%d", &num3);

    leitura (num1, num2, num3);

    printf("O dobro do primeiro valor é:%d\n", num1);
    printf("O dobro do segundo valor é:%d\n", num2);
    printf("O dobro do terceiro valor é:%d\n", num2);
}
