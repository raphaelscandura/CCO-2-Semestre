#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroA = 10, *pt;
    pt = &numeroA;

    printf("\nEndereco apontado: %d %d \n", pt, &numeroA);
    printf("\nEndereco do ponteiro: %d \n", pt);
    printf("\nConteudo da variavel apontada: %d\n", *pt);

    return 0;
}
