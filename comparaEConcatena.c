#include <stdio.h>
#include <string.h>

int main(){
    char string1[30], string2[30];
    printf("Digite a primeira string:\n");
    scanf("%s", string1);

    printf("Digite a segunda string:\n");
    scanf("%s", string2);

    if (!strcmp(string1,string2))
    {
        printf("Strings iguais\n");
    }
    else{
        strncat(string1, string2, 40);
        printf("%s\n", string1);
    }
    return 0;
}