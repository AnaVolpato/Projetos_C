#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <poll.h>
#include <unistd.h>

bool kbhit(){
  struct pollfd pollstdin={STDIN_FILENO, POLLIN, 0};
  return poll(&pollstdin, 1, 0)==1;
}

const int altura =20; 
const int largura =20;

//controle onde vai aparecer a snake
int posicaoX;
int posicaoY;

//controle onde vai aparecer a fruta
int frutaPosicaoX;
int frutaPosicaoY;

//alem do controle da cauda, definimos o tamanho maximo
int caudaPosicaoY[100];
int caudaPosicaoX[100];

int cauda;

bool gameOver;
int pontuacao;

enum DirecaoSnake{
    PARE = 0,
    CIMA,
    BAIXO,
    ESQUERDA,
    DIREITA
};

enum DirecaoSnake direcao;

void configuracaoInicial(){
    gameOver = false;
    direcao = PARE;

    posicaoX = largura / 2;// para a snake ficar na metade da largura
    posicaoY = altura / 2;// para a snake ficar na metade da altura... posicao inicial

    srand((unsigned) time(NULL));//funcao para gerar aleatoriedade para a funcao rand()

    frutaPosicaoX = rand() % largura;// fruta ganha posicao aleatoria entre 0 e a largura 
    frutaPosicaoY = rand() % altura;// fruta ganha posicao aleatoria entre 0 e a altura

    pontuacao = 0;
}

void DesenhoTelaJogo(){
    for(int i=0; i < largura + 2; i++){//parede de cima 
        printf("%c", 176);
    }
    printf("\n");

    for(int i= 0; i<altura; i++){
        for(int j=0; j< largura; j++){
            if(j == 0){// parede da frente
                printf("%c", 176);
            }

            if(i == posicaoY && j == posicaoX){
                printf("O");//onde aparece a snake
            }
            else if(i == frutaPosicaoY && j == frutaPosicaoX){
                printf("%c", 162);/// onde aparece a fruta
            }
            else {
                bool telaCheia = false;

                for(int k=0; k < cauda; k++){
                    if(i == caudaPosicaoY[k] && j == caudaPosicaoX[k]){
                        printf("o");// onde aparece a cauda da snake
                        telaCheia = true;
                    }
                }
                if(!telaCheia){
                    printf(" ");//onde aparece os espaços vazios 
                }
            }
            
            if(j == largura - 1){
                printf("%c", 176);
            }
        }
        printf("\n");
    }

    for(int i=0; i < largura + 2; i++){//parede de baixo
        printf("%c", 176);
    }
    printf("\n");
    printf("PONTUACAO: %d\n", pontuacao);
    printf("\nControles: (w, s, a, d)\n");
}

void Controles(){
    //if(kbhit){// esta funcao verifica se alguma tecla foi apertada
        switch(getchar()){// usamos a funcao getch para pegarmos esta tecla apertada e verificarmos qual foi com switch 
        case 'w':
            direcao = CIMA;
            break;
        case 's':
            direcao = BAIXO;
            break;
        case 'a':
            direcao = ESQUERDA;
            break;
        case 'd':
            direcao = DIREITA;
            break;
        case 'W':
            direcao = CIMA;
            break;
        case 'S':
            direcao = BAIXO;
            break;
        case 'A':
            direcao = ESQUERDA;
            break;
        case 'D':
            direcao = DIREITA;
            break;
        }
    }
//}

int main(){
    configuracaoInicial();
    DesenhoTelaJogo();

    return 0;
}