#include <stdio.h>

int main(){
    int x = 0;
    int i;

    printf("Digite um numero:");
    scanf("%d", &x);

    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", x, i, x*i);
    }


    return 0; 
}