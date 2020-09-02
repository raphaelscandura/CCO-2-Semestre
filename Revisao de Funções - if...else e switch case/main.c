#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, operacao1, operacao2, resultado; //Declaração de variáveis
    char operacao, letra, letranum; //Declaração de variáveis

    printf("Digite um numero para saber se ele eh par ou impar\n"); //Mensagem pedindo o input do usuario
    scanf("%i", &numero); //Armazenando o valor

    if(!numero%2){ //Calculo para verificar se o numero quando dividido por 2 terá resto diferente de zero
        printf("Esse numero eh par\n"); //Mensagem caso o resto da divisao do valor do input do usuario seja igual a zero
    } else {
        printf("Esse numero eh impar\n"); //Mensagem caso o resto da divisao do valor do input do usuario seja igual diferente de zero
    }

    printf("\n-----------------------------------\n"); //Divisão visual

    printf("Digite um numero para fazer uma operacao\n"); //Mensagem pedindo o input do usuario
    scanf("%i", &operacao1); //Armazenando o valor

    printf("Digite outro numero para fazer uma operacao\n"); //Mensagem pedindo o input do usuario
    scanf("%i", &operacao2); //Armazenando o valor

    printf("Qual operacao voce gostaria de fazer com esses dois numeros?\n"); //Mensagem pedindo o input do usuario
    scanf(" %c", &operacao); //Armazenando o valor

    switch(operacao){ //switch com parametro do char que o usuario inseriu
    case '+': resultado = operacao1 + operacao2; //Opercao de soma
              printf("A soma dos dois valores eh igual a: %i", resultado); //Impressao da soma
              break; //fechamento do switch
    case '-': resultado = operacao1 - operacao2; //Opercao de subtracao
              printf("A subtracao dos dois valores eh igual a: %i", resultado); //Impressao da subtracao
              break; //fechamento do switch
    case '/': resultado = operacao1/operacao2; //Opercao de divisao
              printf("A divisao dos dois valores eh igual a: %i", resultado); //Impressao da divisao
              break; //fechamento do switch
    case '*': resultado = operacao1*operacao2; //Opercao de multiplicacao
              printf("A multiplicacao dos dois valores eh igual a: %i", resultado); //Impressao da multiplicacao
              break; //fechamento do switch
    default: printf("Voce nao digitou um operador valido\n");
    }

    printf("\n-----------------------------------\n"); //Divisão visual

    printf("Digite uma letra para verificar se esta escrita maisucula ou minuscula\n"); //Mensagem pedindo o input do usuario
    scanf(" %c", &letra); //Armazenando o valor

    if(letra >= 'a' && letra <= 'z'){ //comparando as letras minusculas com o input do usuario
        printf("A letra que voce digitou e minuscula\n"); //Impressao do resultado caso a letra seja minuscula
    } else if (letra >= 'A' && letra <= 'Z'){ //comparando as letras minusculas com o input do usuario
        printf("A letra que voce digitou e maiuscula\n"); //Impressao do resultado caso a letra seja maiuscula
    } else {
        printf("Isso nao e uma letra\n"); //Impressao do resultado caso nao seja uma letra
    }

    printf("\n-----------------------------------\n"); //Divisão visual

    printf("Digite um valor para verificar se ele eh um numero ou uma letra\n"); //Mensagem pedindo o input do usuario
    scanf(" %c", &letranum); //Armazenando o valor

    if(letranum >= 'A' && letranum <= 'Z' || letranum >= 'a' && letranum <= 'z'){ //comparando com letras minusculas e maiusculas para verificar se é uma letra
        printf("O valor que voce digitou eh uma letra\n"); //Impressao do resultado caso seja realmente uma letra
    } else if (letranum >= '0' && letranum <= '9'){ //comparando com numeros de 0 ate 9
        printf("O valor que voce digitou eh um numero\n"); //Impressao do resultado caso seja realmente um numero
    } else{
        printf("O valor que voce digitou nao eh nem uma letra nem um numero"); //Impressao do resultado caso nao seja nem uma letra ou um numero
    }

    return 0; //fim da funcao
}
