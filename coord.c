#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
}; //p1, p2;

int main(){
    struct ponto a;

    printf("Digite o primeiro ponto(x):");
    scanf("%d", &a.x);

    printf("Digite o segundo ponto(y):");    
    scanf("%d", &a.y);

    printf("\n");
    printf("Coordenadas (%d, %d)\n", a.x, a.y);

    /*if ((a.x > 0 ) && (a.y > 0))
    printf("Q1\n");
        else if ((a.x < 0 ) && (a.y > 0 ))
        printf("Q2\n");
            else if ((a.x < 0) && (a.y < 0 ))
            printf("Q3\n");
                else if ((a.x > 0) && (a.y < 0))
                printf("Q4\n");
                    else if((a.x != 0 ) && (a.y == 0))
                    printf("Eixo X\n");
                        else if((a.x == 0 ) && (a.y != 0))
                        printf("Eixo Y\n");
                            else 
                            printf("Origem\n");*/
}