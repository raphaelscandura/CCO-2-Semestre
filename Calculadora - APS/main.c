#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes_operacoes.h"
#define tamanhoVetor 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetorA[tamanhoVetor], vetorB[tamanhoVetor], cont, entradaMenu, verificacaoNumerica, quantidadeDeNumeros, validacaoOperacao, seletorDeOperacao, resultadoSoma, resultadoSubtracao, resultadoMultiplicacao, PE = 0, decisaoValores;
    char continuar = 's', continuarComValores = 's';

    printf("*******************************************\n");
    printf("              CALCULADORA                  \n");
    printf("*******************************************\n\n");
    printf("Olá! Bem vindo ao prompt de calculadora! O que deseja fazer?\n\n\n\n");
    printf("Digite 1 para Iniciar a calculadora\n\n");
    printf("Digite 2 para Sair\n\n");
    scanf("%i", &entradaMenu);
    printf("\n");

    do{
        switch(entradaMenu){
        case 1:
            system("cls");
            printf("Entre 1 à 10 números, quantos você gostaria de usar em cada vetor?\n");
            scanf("%i", &verificacaoNumerica);
            if(verificacaoNumerica >= 1 && verificacaoNumerica <= 10){
                quantidadeDeNumeros = verificacaoNumerica;
            } else{
                printf("\nO valor precisa estar entre 1 e 10 números, por favor, tente novamente\n");
                return 0;
            }
            break;
        case 2:
            system("cls");
            printf("Obrigado por usar o prompt de calculadora!\n");
            return 0;
            break;
        default:
            printf("Você digitou um valor inválido, por favor, tente novamente e lembre-se digite 1 para iniciar a calculadora ou 2 para sair...\n");
            return 0;
            break;
    }


    for(cont = 0; cont < quantidadeDeNumeros; cont++){
        printf("\nDigite o valor da posição %i do primeiro vetor\n", cont);
        scanf("%i", &vetorA[cont]);
        printf("\nDigite o valor da posição %i do segundo vetor\n", cont);
        scanf("%i", &vetorB[cont]);
    }

    printf("\nQual operação você deseja fazer com esses números?\nDigite 1 para somar\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para calcular o produto escalar entre os vetores\n\n");
    scanf("%i", &validacaoOperacao);
    if(validacaoOperacao >= 1 && validacaoOperacao <= 4){
        seletorDeOperacao = validacaoOperacao;
    } else {
        printf("Operação inválida, por favor tente novamente\n");
        return 0;
    }

    if(seletorDeOperacao == 1){
        for(cont = 0;cont < quantidadeDeNumeros; cont++){
            resultadoSoma = soma(vetorA[cont],vetorB[cont]);
            printf("\nO resultado da soma de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoSoma);
        }
    }

    if(seletorDeOperacao == 2){
        for(cont = 0;cont < quantidadeDeNumeros; cont++){
            resultadoSubtracao = subtracao(vetorA[cont],vetorB[cont]);
            printf("\nO resultado da subtração de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoSubtracao);
        }
    }

    if(seletorDeOperacao == 3){
        for(cont = 0;cont < quantidadeDeNumeros; cont++){
            resultadoMultiplicacao = multiplicacao(vetorA[cont],vetorB[cont]);
            printf("\nO resultado da multiplicacao de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoMultiplicacao);
        }
    }

    if(seletorDeOperacao == 4){
        for(cont = 0;cont < quantidadeDeNumeros; cont++){
            PE = produto_escalar(vetorA[cont],vetorB[cont]);
        }
        printf("\nO produto escalar entre os vetores é igual a: %i\n", PE);
    }

    printf("\nDeseja continuar? s ou n\n");
    scanf(" %c", &continuar);

    if(continuar == 's' || continuar == 'S' || continuar == 'y' || continuar == 'Y'){
        printf("Digite 1 para usar os mesmos vetores ou 2 para inserir novos valores\n");
        scanf("%i", &decisaoValores);
        if(decisaoValores == 1){
            do{
                printf("\nQual operação você deseja fazer com esses números?\nDigite 1 para somar\nDigite 2 para subtrair\nDigite 3 para multiplicar\nDigite 4 para calcular o produto escalar entre os vetores\n\n");
                scanf("%i", &validacaoOperacao);
                if(validacaoOperacao >= 1 && validacaoOperacao <= 4){
                    seletorDeOperacao = validacaoOperacao;
                } else {
                    printf("Operação inválida, por favor tente novamente\n");
                    return 0;
                }

                if(seletorDeOperacao == 1){
                    for(cont = 0;cont < quantidadeDeNumeros; cont++){
                        resultadoSoma = soma(vetorA[cont],vetorB[cont]);
                        printf("\nO resultado da soma de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoSoma);
                    }
                }

                if(seletorDeOperacao == 2){
                    for(cont = 0;cont < quantidadeDeNumeros; cont++){
                        resultadoSubtracao = subtracao(vetorA[cont],vetorB[cont]);
                        printf("\nO resultado da subtração de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoSubtracao);
                    }
                }

                if(seletorDeOperacao == 3){
                    for(cont = 0;cont < quantidadeDeNumeros; cont++){
                        resultadoMultiplicacao = multiplicacao(vetorA[cont],vetorB[cont]);
                        printf("\nO resultado da multiplicacao de %i e %i é igual a: %i\n", vetorA[cont],vetorB[cont], resultadoMultiplicacao);
                    }
                }

                if(seletorDeOperacao == 4){
                    for(cont = 0;cont < quantidadeDeNumeros; cont++){
                        PE = produto_escalar(vetorA[cont],vetorB[cont]);
                    }
                    printf("\nO produto escalar entre os vetores é igual a: %i\n", PE);
                }

                printf("\nDeseja continuar usando os mesmos valores? s ou n\n");
                scanf(" %c", &continuarComValores);
            }while(continuarComValores == 's' || continuarComValores == 'S' || continuarComValores == 'y' || continuarComValores == 'Y');
        }
    }


}while(continuar == 's' || continuar == 'S' || continuar == 'y' || continuar == 'Y');


    return 0;
}
