#include <stdio.h>
#include <conio.h>

int main()
{
    char ch_01, ch_02; //cria��o das vari�veis

    printf("Digite um caractere para ser lido com getch\n"); //Mensagem para o usu�rio
    ch_01 = getch(); //Uso da fun��o para ler e armazenar um caractere sem exebir na tela

    printf("Digite um caractere para ser lido com getche\n"); //Mensagem para o usu�rio
    ch_02 = getche(); //Uso da fun��o para ler e armazenar um caractere que aparece na tela

    printf("\n------------------------------------------\n"); //Divis�o para n�o causar confus�o visual

    printf("Caractere lido com getch %c\n", ch_01); //Impress�o de resultado final
    printf("Caractere lido com getche %c\n", ch_02); //Impress�o de resultado final


    return 0; //Fim da fun��o
}
