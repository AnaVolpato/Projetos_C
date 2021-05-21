#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//const char *tmp = "009123456789";


void subString(char tst[], char out[], int start, int length){


    strncpy(out, tst + start, length);
    // char *str = (char *)malloc(strlen(tst));

    // printf("%s ", strncpy(str, tst, 3));
    // printf("%s ", strncpy(str, &tst [3], 3));
    // printf("%s ", strncpy(str, tst + 6, 3));
    // printf("%s\n", strncpy(str, tst + 9, 3));


}

void tlv(char tst[50]){
    int i = 0;
    char primeirosNumeros[4] = {0x00};
    char t[4] = {0x00};
    char l[4] = {0x00};
    char v[1000] = {0x00};
    int posi1 = 3;
    int tam = 0;
    int tamTotal = 0;
    int soma = 0;
    


    subString(tst, primeirosNumeros, 0, 3);

    tamTotal = atoi(primeirosNumeros);

    printf(".......TAMANHO TOTAL INT %d\n", tamTotal);


    //while(soma < tamTotal){
    while(soma < tamTotal){
        subString(tst, t, posi1+=tam, 3);
        printf("%s ", t);

        subString(tst, l, posi1+=3, 3);
        printf("%s ", l);

        tam = atoi(l);

        subString(tst, v, posi1+=3, tam);
        printf("[%s]\n", v);

        soma += tam + 6; 
        
    }


    // subString(tst, t, posi1+=tam, 3);
    // printf("%s ", t);

    // subString(tst, l, posi1+=3, 3);
    // printf("%s ", l);

    // tam = atoi(l);

    // subString(tst, v, posi1+=3, tam);
    // printf("%s \n", v);
    //while (i<=0);
    //i++;

    //printf("ULTIMO NUMEROOOOOO:%c\n", v[tam-1]);
    
}

int main(){
    char str[1000] = "071000100015Kelvin         000200004ABCD000300025Ana Breatriz Voltpato    ";
    //char aa[50] = {0x00};
    // int posi1;
    // int posi2;



    // printf("Digite o numero:\n");
    // fgets(str, 1000, stdin);



    // printf("Digite o inicio:\n");
    // scanf("%d", &posi1);
    // printf("Digite o fim:\n");
    // scanf("%d", &posi2);



    // subString(aa, str, posi1, posi2);

    tlv(str);

    //printf("%s\n", str);
    
}