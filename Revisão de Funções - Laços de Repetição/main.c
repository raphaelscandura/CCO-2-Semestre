#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;//Declaração de variáveis inteiras
    char i; // Declaração de vaiável

    printf("Impressao de numeros pares de 0 ate 100\n");

    for(cont=0;cont<=100;cont++){ //Laço para repetir a ação 100x
        if(cont%2==0){ //Condicional para verificar se o numero do contador é par
            printf("\n%i", cont); //Imprime o número somente se for par
        }
    }

    printf("\n----------------------------------\n");// Divisão visual

    //Solução mais eficiente

    //char letra = 'A';

   // while (letra >= 'A' && letra <= 'z'){
       // if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')){
           // printf("%c ", letra);
           // letra++;
        //}
    //}

    //Solução com a tabela ASCII, usando decimal e FOR

    printf("\nImpressao de letras maiusculas\n");
    for(i=65;i<=90;i++){ //Laço para repetir a ação de acordo com os decimais da tabela ASCII
        printf(" %c", i);
    }

    printf("\nImpressao de letras minusculas\n");
    for(i=97;i<=122;i++){ //Laço para repetir a ação de acordo com os decimais da tabela ASCII
        printf(" %c", i);
    }

    return 0; //Fim da função
}
