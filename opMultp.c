#include <stdio.h>

int main(){
    int a = 10;
    int b = 2;

    printf("%d += %d = ", a, b);
    a += b;

    //a = a + b
    printf("%d\n", a);

    a = 10;
    b = 2;
    printf("%d -= %d = ", a, b);
    a -= b;
    printf("%d\n", a);

    a = 10;
    b = 2;
    printf("%d /= %d = ", a, b);
    a /= b;
    printf("%d\n", a);

    a = 10;
    b = 2;
    printf("%d *= %d = ", a, b);
    a *= b;
    printf("%d\n", a);

    a = 21;
    b = 2;
    printf("%d %%= %d = ", a, b);
    a %= b;
    printf("%d\n",  a);

}