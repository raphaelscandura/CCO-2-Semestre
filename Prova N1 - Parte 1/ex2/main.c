#include <stdio.h>
#include <stdlib.h>

int main()
{

    char respostaCorreta[4], respostaAluno[3], continuar;
    int cont, acertos[50][4], aluno = 0, media[50];
    float taxaDeAprovacao, mediaGeral, somaDasMedias = 0, aprovados = 0;

    printf("Digite o gabarito da prova\n");

    for(cont = 1; cont <= 3; cont++){
        printf("    Questao %i: ", cont);
        scanf(" %c", &respostaCorreta[cont]);
    }

    do{
        printf("\n");
        for(cont = 1; cont <= 3; cont++){
            printf("    Resposta %i: ", cont);
            scanf(" %c", &respostaAluno[cont]);
            if(respostaAluno[cont] == respostaCorreta[cont]){
                acertos[aluno][cont] = 1;
            } else{
                acertos[aluno][cont] = 0;
            }
        }
        media[aluno] = acertos[aluno][1] + acertos[aluno][2] + acertos[aluno][3];
        if(media[aluno] >= 2 ){
            printf("\nAprovado com a nota %i", media[aluno]);
            aprovados++;
        } else{
            printf("\nReprovado com a nota %i", media[aluno]);
        }
        printf("\nContinua? ");
        scanf(" %c", &continuar);
        aluno++;
    }while(continuar == 's');

    printf("\n");

    printf("Quantidade de provas corrigidas: %i\n", aluno);

    for(cont = 0; cont < aluno; cont++){
        somaDasMedias = media[cont] + somaDasMedias;
    }

    mediaGeral = somaDasMedias/aluno;

    printf ("Media das notas: %.2f\n", mediaGeral);
    printf("Aprovados: %2.f\n", aprovados);
    taxaDeAprovacao = (100 * aprovados)/aluno ;
    printf("Taxa de aprovacao: %.2f%%\n", taxaDeAprovacao);

    return 0;
}

