#include <stdio.h>

int desconto(int *valor, int *vdesc){
    int total;
    int desconto;

    desconto = *valor * *vdesc /100;
    total = *valor - desconto;

    return total;
}

int main(){
    int valor;
    int vdesc;
    int total;

    printf("Defina o valor da compra:\n");
    scanf("%d", &valor);
    printf("Defina o valor do desconto:\n");
    scanf("%d", &vdesc);
    
    total = desconto(&valor, &vdesc);
    
    printf("Valor total:%d\n", total);
}
