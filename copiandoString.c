#include <stdio.h>
#include <string.h>



int main(){
    char string1 [20], string2 [20];
    printf("Digite o dado a ser copiado: \n");
    scanf("%s", string1);

    strcpy(string2, string1);
    printf("string1 = %s\nstring2 = %s\n", string1, string2);
}