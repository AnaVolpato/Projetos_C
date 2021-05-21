#include <stdio.h>

int main(void)
{
    struct ficha_de_aluno {
    char nome [50];
    float nota1;
    float nota2;
    };

    struct ficha_de_aluno aluno;


    printf("Cadastro aluno\n");
    fflush(stdin);

    printf("Nome do aluno: ");
    fgets(aluno.nome,40,stdin);

    printf("informe a primeira nota: ");
    scanf("%f",&aluno.nota1);

    printf("informe a segunda nota: ");
    scanf("%f",&aluno.nota2);

    printf("%s nota1:[%.2f] nota2:[%.2f]\n", aluno.nome, aluno.nota1, aluno.nota2);
    //printf("nota1[%.2f]",aluno.nota1);
    //printf("nota2:[%.2f]\n",aluno.nota2);
}