#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j;

    for (i=1; i<=4; i++) {

        for (j=1; j<=4; j++) {

            if (j < 4)
                printf("%d\t", j*i);
            else
                printf("%d\n", j*i);
        }
    }
}