#include <stdio.h>

int main(){
    int val = 120;
    int juros;
    int parc = 2;

    //juros = val * (parc/100)
    juros = parc * (val/100);

    printf("%d", juros);
}