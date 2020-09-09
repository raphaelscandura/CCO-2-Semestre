#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;//Declara��o de vari�veis inteiras
    char i; // Declara��o de vai�vel

    printf("Impressao de numeros pares de 0 ate 100\n");

    for(cont=0;cont<=100;cont++){ //La�o para repetir a a��o 100x
        if(cont%2==0){ //Condicional para verificar se o numero do contador � par
            printf("\n%i", cont); //Imprime o n�mero somente se for par
        }
    }

    printf("\n----------------------------------\n");// Divis�o visual

    //Solu��o mais eficiente

    //char letra = 'A';

   // while (letra >= 'A' && letra <= 'z'){
       // if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')){
           // printf("%c ", letra);
           // letra++;
        //}
    //}

    //Solu��o com a tabela ASCII, usando decimal e FOR

    printf("\nImpressao de letras maiusculas\n");
    for(i=65;i<=90;i++){ //La�o para repetir a a��o de acordo com os decimais da tabela ASCII
        printf(" %c", i);
    }

    printf("\nImpressao de letras minusculas\n");
    for(i=97;i<=122;i++){ //La�o para repetir a a��o de acordo com os decimais da tabela ASCII
        printf(" %c", i);
    }

    return 0; //Fim da fun��o
}
