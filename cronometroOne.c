#include <stdio.h>
#include <time.h>

int main()
{
    float tempo;
    time_t t_ini, t_fim;
    int i, j;

    t_ini = time(NULL);
    for(i = 0; i < 50000; i++)
    {
        for(j = 0; j < 50000; j++);
    }
    t_fim = time(NULL);

    tempo = difftime(t_fim, t_ini);

    printf("%f\n", tempo);
    return 0;
}