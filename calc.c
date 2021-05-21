#include <stdio.h>

int valMaior (int *num1, int *num2){
    int z;
    if (*num1 > *num2)
        z = *num1;
    if (*num2 > *num1)
        z = *num2;

    return z;
}

int main (){
    int num1;
    int num2;
    int z;

    printf("DIgite o primeiro valor:\n");
    scanf("%d", &num1);
    
    printf("DIgite o segundo valor:\n");
    scanf("%d", &num2);


    z = valMaior(&num1, &num2);

    printf("O valor maior é:%d\n", z);

}