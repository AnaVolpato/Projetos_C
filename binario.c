#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int bin[5];
    int aux;

    printf("Digite um numero (base decimal) para ser convertido:\n");
    scanf("%d", &num);

    for (aux = 4; aux >=0; aux--)
    {
        if (num % 2 == 0)
        bin[aux] = 0;
        else 
        bin[aux] = 1;
        num = num / 2;
    }

    for (aux = 1; aux < 5; aux++)
        printf("%d", bin[aux]);

    printf("\n");

    return 0;
}


// int main(){
//     char bitmap[] = "098765";
//     char bitmapUm;
//     int bitmapInt;
//     int i = 0;
//     int bitmap_Um;
    

//     bitmapUm = bitmap[2];
//     printf("%d\n", bitmapUm);

//     bitmap_Um = bitmapUm - '0';
//     printf("%d\n", bitmap_Um);

        // bitmapInt = atoi(bitmapUm);

    // while(i < 2){
    //     //bitmapUm = bitmap[i=1];

    //     i++;
    // }

    // int bin[5];
    // int aux;

    // printf("%c\n", bitmap[2]);

    // bitmapInt = atoi(bitmap[2]);

    // printf("%d\n", bitmapInt);

    // for (aux = 4; aux >=0; aux--)
    // {
    //     if (bitmap % 2 == 0)
    //     bin[aux] = 0;
    //     else 
    //     bin[aux] = 1;
    //     bitmap = bitmap / 2;
    // }

    // for (aux = 1; aux < 5; aux++)
    //     printf("%d", bin[aux]);

    // printf("\n");

//     return 0;
// }