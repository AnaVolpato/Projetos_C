#include <stdio.h>

int conta(int num1, int num2, char func){
    int total;

    if (func == '+')
        total = num1 + num2;
    if (func == '-')
        total = num1 - num2;
    if (func == '/')
        total = num1 / num2;
    if (func == '*')
        total = num1 * num2;
                    //else 
                    //return ("CODIGO ERRADO!");
    return total;
}

int main(){
    int num1;

    //printf("%d %c\n", num1, num1);
    int num2;
    char func;
    int total;

    printf("CALCULADORA\n\n");
    scanf("%d %c %d", &num1, &func, &num2);
    //fflush(stdin); para windows
    //__fpurge(stdin); para linux
    //__fpurge(stdin); 
    //getchar(); *funciona*
    //scanf(" %c", &func); *espaço antes do %c tambem funciona
    //scanf("%c", &func);
    //func = getchar(); errado
    //getchar(); errado     
    //scanf("%d", &num2);

    printf(">>>%d %c %d\n", num1, func, num2);
    total = conta(num1, num2, func);

    printf("Total:%d", total);
}