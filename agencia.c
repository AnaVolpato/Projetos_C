#include <stdio.h>
#include <stdlib.h>

void main(){
    int conta, cTotNeg=0, cTot=0;
    float saldo, soma;
    char nome;

    printf("Digite o numero da conta:\n");
    scanf("%d", &conta);

    while (conta > 0 && cTot <3) {
        cTot++;
        printf("Nome:");
        scanf("%s", &nome);
        printf("Saldo:");
        scanf("%f", &saldo);
        soma += saldo;
        if (saldo < 0) {
            cTotNeg++;
            printf("%d - %f - negativo\n\n", conta, saldo);
        }
        else {
            printf("%d - %f - positivo\n\n", conta, saldo);
        }
        printf("Digite o numero da conta ou -999 para terminar:\n");
        scanf("%d", &conta);
    }
    printf("Numero total de clientes com saldo negativos: %d\n", cTotNeg);
    printf("Numero total de clientes da agencia: %d\n", cTot);
} 