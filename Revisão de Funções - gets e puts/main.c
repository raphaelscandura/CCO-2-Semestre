#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30], sobrenome[30]; //Declara��o de vari�veis

    printf("Digite seu nome: "); //Mensagem para o usu�rio
    gets(nome); //L� e armazena os valores
    printf("Digite seu sobrenome: "); //Mensagem para o usu�rio
    gets(sobrenome); //L� e armazena os valores

    puts("\n--------------------------------------\n"); //Divis�o visual
    puts("Tenha uma boa aula!"); //Impress�o de resultados usando puts
    puts(nome);
    puts(sobrenome);

    return 0;
}
