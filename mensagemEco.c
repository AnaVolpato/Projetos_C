#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[20];
    printf("Digite algo para ser exibido: \n");
    scanf("%s",texto);

    printf("Foi digitado: %s\n", texto);
    //scanf("%d",&texto);

    return 0;
}