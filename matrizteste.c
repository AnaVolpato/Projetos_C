//Preenche uma matriz 3x3 e depois mostra o resultado.

#include <stdio.h>

int main() {
  int i, j, matriz[3][3]; //Matriz 3x3.
  
  printf("\n==============MATRIZ 3x3==============\n");
  
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
     printf("\nDigite um valor para [%d][%d]: ", i+1, j+1);
     scanf("%d", &matriz[i][j]);
     
   }
   
  }
  
  printf("\n");
  
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
     printf("%d ", matriz[i][j]);
     
   }
   
   printf("\n");
   
  }
  

}