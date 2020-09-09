#include <stdio.h>
#define TAMANHO 100

int main()
{
    double vetor[100];
    int A[8], B[8], cont, C[5], D[5], MPE[5], PE = 0, F[10], E[10],size = 0, controle = 0;

    vetor[0] = 1; // Primeiro elemento da sequencia de fibo
    vetor[1] = 1; // Segundo elemento da sequencia de fibo

    //Vetor B tem valores triplos no mesmo índice

   for(cont = 1; cont <= 8; cont++){
        printf("\nDigite o %i valor do vetor A\n", cont);
        scanf("%i", &A[cont]);
    }

    for(cont = 1; cont <= 8; cont++){
     B[cont] = A[cont] * 3;
     printf("\nO numero de posicao %i do vetor B eh igual a: %i\n", cont, B[cont]);
    }

    printf("\n-----------------------------------------------\n");

    //Produto escalar entre dois vetores

    for(cont = 0; cont < 5; cont++){
        printf("\nDigite o %i valor do vetor C\n", cont);
        scanf("%i", &C[cont]);
        printf("\nDigite o %i valor do vetor D\n", cont);
        scanf("%i", &D[cont]);
    }

    for(cont = 0;cont < 5; cont++){
        MPE[cont] = C[cont] * D[cont];
        PE += MPE[cont];
    }

    printf("\nO produto escalar entre os vetores eh igual a: %i\n", PE);

    printf("\n-----------------------------------------------\n");

    for (int i = 0; i < 10; i++){
        printf("Digite o elemento %d do vetor 1: ", i);
        scanf("%d", &E[i]);
    } //Fim do for

   for (int i = 0; i < 10; i++)
        F[i] = E[10 - i - 1];

    printf("\n\n***** Imprimindo Vetores *****\n");

    printf("Vetor a: ");

    for (int i = 0; i < 10; i++)
        printf("%d ", E[i]);

    printf("\n\nVetor b: ");

    for (int i = 0; i < 10; i++)
        printf("%d ", F[i]);

    printf("\n-----------------------------------------------\n");

    //Impressao da sequencia de Fibonacci de acordo com a entrada do usuário

    do{
        printf("***** Sequencia de Fibonacci *****\n\n");
        printf("Entre 1 a 100,\n");
        printf("Quantos numeros deseja imprimir? ");
        scanf("%d", &size);
        if (size > 0 && size <= TAMANHO)
            controle=1;
            printf("\n\n");
    }while(controle==0);

    // Calcula sequencia
    for(int i = 2; i <= size-1; i++)
        vetor[i] = vetor[i-1] + vetor[i-2];

    printf("Sequencia de Fibonacci: ");
    for(int i = 0; i <= size-1; i++){
        printf("%.0f", vetor[i]);
        if (i != (size-1))
        printf(", ");
    }// Fim do for

    printf("\n\n");

    return 0;
}// Fim da funcao main()

