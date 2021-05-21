#include <stdio.h>

int main(){
    int vet[3];
    int i;

    for(i=0; i<3; i++){
        printf("Digite os valores:\n");
        scanf("%d", &vet[i]);
    }
    for(i=0; i<3; i++){
        printf("%d\n", vet[i]);
    }

    //printf("%d", );
}