#include <stdio.h>
int main ()
{
	char strings [5][100];
	int count;
	for (count=0;count<5;count++)
        {
        	printf ("Digite uma string: \n");
			scanf ("%s", strings[count]);
        }

	for (count=0;count<5;count++)
                printf ("%s\n",strings[count]);
        return(0);
}