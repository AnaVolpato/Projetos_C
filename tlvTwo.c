#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//const char *tmp = "This string literal is arbitrary";

// char *getSubstring(char *dst, /*const*/ char *src, int start, int length)
// {
//     return strncpy(dst, src + start, length);
// }

void getSubstring(char *dst, /*const*/ char *src, int start, int length)
{
    strncpy(src, dst + start, length);
}

int main(){
    char tmp[] = "Beatriz";
    char str[8] = {0x00};

    char tmpp[] = "abcdefgh";
    char strr[8] = {0x00};




    // printf("Digite um numero:\n");
    // gets(tmp);
    
    getSubstring(tmp, str, 0, 4);
    getSubstring(tmpp, strr, 0, 3);
    printf("%s\n", str);
    printf("%s\n", strr);
    //printf("%s\n", getSubstring(str, tmp, 5, 10));

    //free(str);
    //exit(EXIT_SUCCESS);
}