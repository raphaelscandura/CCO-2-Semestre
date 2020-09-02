#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch_01, ch_02; //Declaração de variáveis

    printf("Digite um caractere para ser lido com getchar\n"); //Mensagem para o usuário
    ch_01 = getchar(); //Lê e armazena o valor da primeira variável
    fflush(stdin);  //Limpar o buffer de entrada
    printf("\nDigite outro caractere para ser lido com getchar\n"); //Mensagem para o usuário
    ch_02 = getchar(); //Lê e armazena o valor da segunda variável

    printf("\n------------------------------------------\n"); //Divisor para facilitar a visualização
    printf("O primeiro caractere digitado foi: "); //Impressão do valor armazenado da primeira variável
    putchar(ch_01);
    printf("\nO segundo caractere digitado foi: "); //Impressão do valor armazenado da segunda variável
    putchar(ch_02);

    return 0; //Fim da função
}
