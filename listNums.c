#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1,  &num2);


    if(num1 < num2){
        int i;
        for(i=num1; i<=num2; i++){
            printf("%d\n", i);
        }

    }
    else if(num1 > num2){
        int i;
        for(i=num1; i>=num2; i--){
            printf("%d\n", i);
        }

    }
    else{
        printf("Numeros iguais\n");
    }
}

