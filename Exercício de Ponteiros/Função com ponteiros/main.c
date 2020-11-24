#include <stdio.h>
#include <stdlib.h>

void troca(int  *x, int *y);

int main()
{
    int a = 5, b = 1;

    troca(&a,&b);
    printf("%d - %d", a, b);

    return 0;
}

void troca(int *x, int *y){
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
