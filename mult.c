#include <stdio.h>

int multp(int *num1, int *num2){
    int total;

    total = *num1 * *num2;
    //*num1 = *num1 * *num2;
    //*num2 = *num2 * *num1;
    return total;
}

int main(){
    int num1 = 10;
    int num2 = 20;
    int total;

    printf("numero 1:%d\n", num1);
    printf("numero 2:%d\n", num2);

    //multp(&num1, &num2);
    total = multp(&num1, &num2);

    printf("numero 1 x numero 2:%d\n", total);
    printf("numero 2 x numero 1:%d\n", total);

    //  int *num1;
    //  int *num2;
}