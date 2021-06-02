#include <stdio.h>
#include <stdlib.h>

float soma (float vendas[4]){
    float total;

    total = vendas[0] + vendas[1] + vendas[2] + vendas[3];

    return total;
}

float comissao(float vendas[4], float salario){
    float totalComissao;
    float total;
    float comissao;

    comissao = soma(vendas);

    totalComissao = (comissao/100)*10;
    total = salario + totalComissao;

    return total;
}

struct cadastro{
    char nome[20];
    float salario_fixo;
    float total_de_vendas[4];
};

int main(){
    struct cadastro colaboradores[4];

    int i; // contador1
    int j; // contador2
    int h;
    float totalVendas;
    float totalSalario;

    for( i = 0 ; i <= 3 ; i++ ){

    printf("Informe o nome do colaborador: ");
    fgets(colaboradores[i].nome, sizeof(colaboradores[i].nome), stdin);

    printf("Informe o salario fixo do colaborador: R$");
    scanf("%f", &colaboradores[i].salario_fixo);

    printf("Informe os totais das ultimas 4 semanas de venda do colaborador:\n");

    h = 1;
    for( j = 0 ; j <= 3 ; j++ ){
        printf("Semana %d: R$", h);
        scanf("%f", &colaboradores[i].total_de_vendas[j]);
        h++;
    }
    fflush(stdin);
    getchar();

    printf("\n");

    totalVendas = soma(colaboradores[i].total_de_vendas);
    totalSalario = comissao(colaboradores[i].total_de_vendas, colaboradores[i].salario_fixo);

    printf("Nome: %sTotal de vendas: R$%.2f\nSalario do mês: R$%.2f\n\n", colaboradores[i].nome, totalVendas, totalSalario);
    }
}