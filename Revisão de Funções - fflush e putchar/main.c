#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch_01, ch_02; //Declara��o de vari�veis

    printf("Digite um caractere para ser lido com getchar\n"); //Mensagem para o usu�rio
    ch_01 = getchar(); //L� e armazena o valor da primeira vari�vel
    fflush(stdin);  //Limpar o buffer de entrada
    printf("\nDigite outro caractere para ser lido com getchar\n"); //Mensagem para o usu�rio
    ch_02 = getchar(); //L� e armazena o valor da segunda vari�vel

    printf("\n------------------------------------------\n"); //Divisor para facilitar a visualiza��o
    printf("O primeiro caractere digitado foi: "); //Impress�o do valor armazenado da primeira vari�vel
    putchar(ch_01);
    printf("\nO segundo caractere digitado foi: "); //Impress�o do valor armazenado da segunda vari�vel
    putchar(ch_02);

    return 0; //Fim da fun��o
}
