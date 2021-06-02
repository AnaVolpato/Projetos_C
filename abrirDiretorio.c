#include <dirent.h> 
#include <stdio.h> 

int main(void) {
    DIR *d;
    struct dirent *dir;
    char diretorio[20] = {0x00};
    char diretorio2[20] = {0x00};
    int tamDiretorio;
    int a;
    int b = 0;

    printf("Digite o caminho do diretorio que deseja ver: ");
    fgets(diretorio, sizeof(diretorio), stdin);
    
    tamDiretorio = strlen(diretorio);

    for (a = 0; a < tamDiretorio; a++){
      if(diretorio[a] != NULL){
        diretorio2[b] = diretorio[a];
        b++;
      } 
    }
    printf("[%s]", diretorio);
    printf("[%s]", diretorio2);
return 0;
    d = opendir(diretorio);

    if (d) {
      while ((dir = readdir(d)) != NULL) {
        printf("%s\n", dir->d_name);
      }
      closedir(d);
    }
      
   return(0);
}
