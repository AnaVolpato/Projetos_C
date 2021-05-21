#include <stdio.h>
#include <string.h>

int main(){
    int a = 0;
    char string[50] = {0x00};
    int tamString;

    printf("Digite um numero ('0s' serao substituidos por '1'): ");
    fgets(string, sizeof(string), stdin);
    // printf("(Se digitar '0' sera substituido por '1')");

    tamString = strlen(string);
    // printf("\ntam: %d", tamString);
    // return 0;

    while(a <= tamString){
        switch (string[a]){
            case '0':
                string[a] = '1';
                break;
            default:
                break;
        }
        a++;
    }


    printf("String: %s", string);
}