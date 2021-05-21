#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numero_valido(char num_str[]);

int main ()
{
// números de no máximo 10 dígitos
char num_str[10];
// onde guardaremos o número caso ele seja válido
int numero;

printf("Digite o número:");
gets(num_str);

if (!numero_valido(num_str))
{
    puts("Número não é válido");
    puts(num_str);
}
else
{
    numero = atoi(num_str);
    printf("O número %d é válido \n", numero);
}
}

int numero_valido(char num_str[])
{
for(int i = 0; i < strlen(num_str); i++)
{
if (!(num_str[i] >= '0' && num_str[i] <= '9'))
{
return 0;
}
}
return 1;
}