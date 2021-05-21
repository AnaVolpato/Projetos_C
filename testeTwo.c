#include <stdio.h>
#include <string.h>


int soma(int num1, int num2){

    int total;

    total = num1 + num2;

    return total;
} 

int main(){
    int num1 = 10;
    
    int *pointer;
    pointer = &num1;
    printf("num1:%i\n", num1);
    printf("pointer:%d\n", pointer);
    *pointer = 15;
    printf("num1:%i\n", num1);
    printf("num1:%d\n", &num1);
    printf("pointer:%d\n", pointer);
    printf("pointer:%d\n", *pointer);
    // num1 = 22;
    /*int num2;
    int total;

    scanf("%i", &num1);
    scanf("%i", &num2);

    total = soma(num1, num2);
    
    printf("Total:%i\n", total);
    printf("num1:%i\n", num1);
    printf("num1:%d\n", &num1);
    
    char nome[20];

    int i;  
    char nome1[20] = "Ana Beatriz Souto";  
    char nome2[20];  
        for (i = 4; nome1[i] <= 11; i++)     
            nome2[i] = nome1[i];  
            nome2[i] = '\0';

    printf("Nome do meio:%s\n", nome2);
    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("")*/
}