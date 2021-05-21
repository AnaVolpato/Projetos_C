#include <stdio.h>
#include <stdlib.h>

char *findCharactere (char caractere, char *str);

int main(int argc, char *argv[]){
    char frase[80];
    char chr, *pointer;

    printf("Digite uma frase:");
    gets(frase);
    printf("Digite um caractere:");
    chr = getche();
    pointer = findCharactere (chr, frase);

    if (pointer) printf("\n\n%s\n\n", pointer);
    else printf("\n\nNenhuma paridade");

    system('PAUSE');
    return 0;
}

char *findCharactere(char caractere, char *str){
    int counter = 0;

    while((caractere != str[counter]) && (str[counter] !='\0')) counter++;

    if(str[counter]) return (&str[counter]);

    else return (char *) '\0';
}