#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bina(int num){
    char _1 [5] = "0001";
    char _2 [5] = "0010";
    char _3 [5] = "0011";
    char _4 [5] = "0100";
    char _5 [5] = "0101";
    char _6 [5] = "0110";
    char _7 [5] = "0111";
    char _8 [5] = "1000";
    char _9 [5] = "1001";
    char _0 [5] = "0000";
    switch (num)
    {
    case 1:
        printf("%s", _1);
        break;
    case 2:
        printf("%s", _2);
        break;
    case 3:
        printf("%s", _3);
        break;
    case 4:
        printf("%s", _4);
        break;
    case 5:
        printf("%s", _5);
        break;
    case 6:
        printf("%s", _6);
        break;
    case 7:
        printf("%s", _7);
        break;
    case 8:
        printf("%s", _8);
        break;
    case 9:
        printf("%s", _9);
        break;
    case 0:
        printf("%s", _0);
        break;
    
    default:
        break;
    }

}

// int main(){
//     char bitmap[50] = "2238000000410008";
//     char bitmapHex[3];
//     int tam = 0;
//     int tamDois = 0;
//     int tamanhoTotal = 0;
//     int i = -2;
//     int j = -1;
//     int l = 0;
//     char numBitmap[2] = {0x00};
//     int bitmapInt;
//     char posi[2];
//     int numeroInt;
//     int bin[5];
//     int aux;
//     char zAux[128] = {0x00};
//     int k = 0;
//     int tamanhoBinario = 0;
//     int posit;
//     char a;

//     tamanhoTotal = strlen(bitmap);

//     printf("\nBITMAP: %s\n", bitmap);
//     printf("BITMAP HEX: ");
//     printf("%s ", bitmapHex);

//     while (tam < (tamanhoTotal/2)){

//         strncpy(bitmapHex, bitmap + (i+=2), 2);
//         printf("%s ", bitmapHex);

//         tam ++;}
    
//     printf("\n");

//     printf("BITMAP BIN: ");


//     while(tamDois < tamanhoTotal){
//         numeroInt = bitmap[j+=1] - '0';
//         bina(numeroInt);

//         // switch (a = bitmap[j+=1])
//         // {
//         // case 0:
//         //     printf("%c", a);
//         //     break;
//         // case 1:
//         //     printf("%c", a);
//         //     break;
//         // case 2:
//         //     printf("%c", a);
//         //     break;
//         // case 3:
//         //     printf("%c", a);
//         //     break;
//         // case 4:
//         //     printf("%c", a);
//         //     break;
//         // case 5:
//         //     printf("%c", a);
//         //     break;
//         // case 6:
//         //     printf("%c", a);
//         //     break;
//         // case 7:
//         //     printf("%c", a);
//         //     break;
//         // case 8:
//         //     printf("%c", a);
//         //     break;
//         // case 9:
//         //     printf("%c", a);
//         //     break;
        
//         // default:
//         //     break;
//         // }


//             zAux[k] = numeroInt + 48;
        
//         tamDois++;
//     }
// return 0;
//     printf("%s\n", zAux);

//     tamanhoBinario = strlen(zAux);

//     printf("DADOS PRESENTES: ");

//     k = -1;
//     while (l < tamanhoBinario){
//         if (zAux[k+=1] == '1' )
//             printf("%d ", (k + 1));
//         l++;
//     }

//     printf("\n");
// }



int main(){
    char bitmap[50] = {0x00};
    char bitmapHex[3];
    int tam = 0;
    int tamDois = 0;
    int tamanhoTotal = 0;
    int i = -2;
    int j = -1;
    int l = 0;
    char numBitmap[2] = {0x00};
    int bitmapInt;
    char posi[2];
    int numeroInt;
    int bin[5];
    int aux;
    char zAux[150] = {0x00};
    int k = 0;
    int tamanhoBinario = 0;
    int posit;

    printf("Digite o bitmap: \n");
    fgets(bitmap, 50, stdin);

    tamanhoTotal = strlen(bitmap);

    printf("\nBITMAP: %s\n", bitmap);
    printf("BITMAP HEX: ");
    // printf("%s ", bitmapHex);

    while (tam < (tamanhoTotal/2)){

        strncpy(bitmapHex, bitmap + (i+=2), 2);
        printf("%s ", bitmapHex);

        tam ++;}
    
    printf("\n");

    printf("BITMAP BIN: ");

    while(tamDois < tamanhoTotal){
        // if (bitmap[j+=1] == 'A'){
        //     numeroInt = 10;
        // }
        // else if (bitmap[j+=1] == 'B' ){
        //     numeroInt = 10;
        // }
        // printf("aaaa%d\n", numeroInt);
        // printf("bbbb%d", numeroInt);
        // else if (bitmap[j+=1] == 'b' || bitmap[j+=1] == 'B' ){
        //     numeroInt = 11;
        // }
        // else if (bitmap[j+=1] == 'c' || bitmap[j+=1] == 'C' ){
        //     numeroInt = 12;
        // }
        // else if (bitmap[j+=1] == 'd' || bitmap[j+=1] == 'D' ){
        //     numeroInt = 13;
        // }
        // else if (bitmap[j+=1] == 'e' || bitmap[j+=1] == 'E' ){
        //     numeroInt = 14;
        // }
        // else if (bitmap[j+=1] == 'f' || bitmap[j+=1] == 'F' ){
        //     numeroInt = 15;
        // }

        switch (bitmap[j+=1])
        {
        case 'a':
            numeroInt = 10;
            break;
        case 'A':
            numeroInt = 10;
            break;
        case 'b':
            numeroInt = 11;
            break;
        case 'B':
            numeroInt = 11;
            break;
        case 'c':
            numeroInt = 12;
            break;
        case 'C':
            numeroInt = 12;
            break;
        case 'd':
            numeroInt = 13;
            break;
        case 'D':
            numeroInt = 13;
            break;
        case 'e':
            numeroInt = 14;
            break;
        case 'E':
            numeroInt = 14;
            break;
        case 'f':
            numeroInt = 15;
            break;
        case 'F':
            numeroInt = 15;
            break;
        case '1':
            numeroInt = 1;
            break;
        case '2':
            numeroInt = 2;
            break;
        case '3':
            numeroInt = 3;
            break;
        case '4':
            numeroInt = 4;
            break;
        case '5':
            numeroInt = 5;
            break;
        case '6':
            numeroInt = 6;
            break;
        case '7':
            numeroInt = 7;
            break;
        case '8':
            numeroInt = 8;
            break;
        case '9':
            numeroInt = 9;
            break;
        case '0':
            numeroInt = 0;
            break;
        
        default:

            break;
        }

        // else if (bitmap[1] == 1){
        //     numeroInt = 1;
        // }
        // else if (bitmap[1] == 2){
        //     numeroInt = 2;
        // }
        // else if (bitmap[1] == 3){
        //     numeroInt = 3;
        // }
        // else if (bitmap[j+=1] == 4){
        //     numeroInt = 4;
        // }
        // else if (bitmap[j+=1] == 5){
        //     numeroInt = 5;
        // }
        // else if (bitmap[j+=1] == 6){
        //     numeroInt = 6;
        // }
        // else if (bitmap[j+=1] == 7){
        //     numeroInt = 7;
        // }
        // else if (bitmap[j+=1] == 8){
        //     numeroInt = 8;
        // }
        // else if (bitmap[j+=1] == 9){
        //     numeroInt = 9;
        // }
        // else if (bitmap[j+=1] == 0){
        //     numeroInt = 0;
        // }

    //     else 

        //  printf(">>>::::::[%d]\n", numeroInt);

        for (aux = 3; aux >=0; aux--)
            {
            if (numeroInt % 2 == 0)
                bin[aux] = 0;
            else 
                bin[aux] = 1;
            numeroInt = numeroInt / 2;
            }

        for (aux = 0; aux < 4; aux++, k++)

            zAux[k] = bin[aux] + 48;
        
        tamDois++;
    }
        

    printf("%s\n", zAux);

    tamanhoBinario = strlen(zAux);

    printf("DADOS PRESENTES: ");

    k = -1;
    while (l < tamanhoBinario){
        if (zAux[k+=1] == '1' )
            printf("%d ", (k + 1));
        l++;
    }

    printf("\n");
}
