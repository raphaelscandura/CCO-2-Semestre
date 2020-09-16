#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [100];

    printf("Digite seu nome\n");
    gets(nome);
    printf("O seu nome eh %s", nome);

    return 0;
}
