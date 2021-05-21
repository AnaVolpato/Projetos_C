#include <stdio.h>

void bin(int num){
    char _1 [5]= "0001";
    char _2 [5]= "0010";
    char _3 [5]= "0011";
    char _4 [5]= "0100";
    char _5 [5]= "0101";
    char _6 [5]= "0110";
    char _7 [5]= "0111";
    char _8 [5]= "1000";
    char _9 [5]= "1001";
    char _0 [5]= "0000";
    switch (num)
    {
    case 1:
        printf("BINARIO: %s\n", _1);
        break;
    case 2:
        printf("BINARIO: %s\n", _2);
        break;
    case 3:
        printf("BINARIO: %s\n", _3);
        break;
    case 4:
        printf("BINARIO: %s\n", _4);
        break;
    case 5:
        printf("BINARIO: %s\n", _5);
        break;
    case 6:
        printf("BINARIO: %s\n", _6);
        break;
    case 7:
        printf("BINARIO: %s\n", _7);
        break;
    case 8:
        printf("BINARIO: %s\n", _8);
        break;
    case 9:
        printf("BINARIO: %s\n", _9);
        break;
    case 0:
        printf("BINARIO: %s\n", _0);
        break;
    
    default:
        break;
    }

}

int main(){
    int num;

    printf("Digite o numero:");
    scanf("%d", &num);

    bin(num);
}