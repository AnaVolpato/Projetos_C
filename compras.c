#include <stdio.h>
#include <stdlib.h>

float aVista(float val){
    //float valor;
    float desc;

    desc = val / 10;
    //valor = val - desc;

    return desc;
}

// int parceladoDuasX(int val){
//     int valor;
    
// }

//i++ / i = i + 1 / i += 1 
//i-- / i = i - 1 / i -= 1 

float parcelado(float val){
    float juros;
    //float _3juros;
    //int tot;

    juros = (val/100) * 3;
    //_3juros = _1juros * 3;


    return juros;    

}
int main(){
    float etiqueta;
    int opcao;
    int _aVista;
    int etiquetaJuros;
    float _parcelado;
    int parcelas;
    int juros;


    printf("Valor total: R$ ");
    scanf("%f", &etiqueta);
    setbuf(stdin, NULL);


    puts("Escolha uma opção:");
    puts("1- A VISTA (10% DE DESCONTO)");
    puts("2- PARCELADO DUAS VEZES");
    puts("3- PARCELADO + DE DUAS (3% DE JUROS AO MES)");
    do{
        scanf("%d", &opcao);
        setbuf(stdin, NULL);
    } while ( opcao < 1 || opcao > 3);

    printf("%d\n", opcao);

    _aVista = aVista(etiqueta);
//    _2x = parceladoDuasX(etiqueta);
    _parcelado = parcelado(etiqueta);


    switch (opcao)
    {
    case 1:
        printf("Total com desconto : R$ %.2f\n", (etiqueta - _aVista));
        break;
    case 2:
        printf("Prestação 1: R$ %.2f \n", (etiqueta /2));
        printf("Prestação 2: R$ %.2f \n", (etiqueta /2));
        printf("Total: R$ %.2f \n", etiqueta);
        break;
    case 3:
        //int i;
        printf("Total: %.2f\n", etiqueta);


        printf("Digite o numero de parcelas:\n");
        do
        {
            scanf("%d", &parcelas);
            setbuf(stdin, NULL);

        } while (parcelas < 3 || parcelas > 10);
        

        float parcXparc = parcelas * _parcelado;

        printf("Total juros: R$ %.2f\n", parcXparc);
        printf("Total valor com juros: R$ %.2f\n", (etiqueta + parcXparc));
        printf("Valor de cada parcela: R$ %.2f\n", (etiqueta + parcXparc) / parcelas);
        //printf("Parcelas: \n");
            //for(i=1; i<=)

        break;
    default:
        puts("Opção invalida!");
    }
}