#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    int *pont; //Declaração de ponteiro

    pont = &i; //Inicializa o ponteiro

    *pont = 5; //Altera o conteúdo do endereço de memória (variavel i)

    //Imprime os valores
    printf("%d\t%d\t%p\n", i, *pont, pont);

    return 0;
}
