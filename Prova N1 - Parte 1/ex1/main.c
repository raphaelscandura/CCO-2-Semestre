#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seedA, valorB, valorA[30], cont, ocorrencias = 0;

    printf("Digite a: ");
    scanf("%i", &seedA);
    srand(seedA);

    do{

    printf("Digite b: ");
    scanf("%i", &valorB);

    } while(1 > valorB || valorB > 20);

    printf("\nNumeros gerados: ");

    for(cont = 0; cont < 30; cont++){
        valorA[cont] = rand() % 20 + 1;
        printf(" %i", valorA[cont]);
        if(valorA[cont] == valorB){
        ocorrencias++;
        }
    }

    if(ocorrencias == 0){
        printf("\nO valor nao foi encontrado\n");
    }else{
        printf("\nO valor foi encontrado %i vezes\n", ocorrencias);
    }

    return 0;
}
