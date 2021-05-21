#include <stdio.h>

void main(){
    int a = 10;

    printf("A variavel a é = %d\n", a);
    scanf("%d", &a);
    printf("A variavel a mudou para = %d\n", a);

    float b = 12.5;

    printf("A variavel b é = %f\n", b);
    scanf("%f", &b);
    printf("A variavel a mudou para = %f\n", b);


    char c = 'D';

    printf("A variavel a é = %c\n", c);
    //fflush(stdin);
    getchar();
    scanf("%c", &c);
    printf("A variavel a mudou para = %c\n", c);
}
