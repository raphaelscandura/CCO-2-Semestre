#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30], sobrenome[30]; //Declaração de variáveis

    printf("Digite seu nome: "); //Mensagem para o usuário
    gets(nome); //Lê e armazena os valores
    printf("Digite seu sobrenome: "); //Mensagem para o usuário
    gets(sobrenome); //Lê e armazena os valores

    puts("\n--------------------------------------\n"); //Divisão visual
    puts("Tenha uma boa aula!"); //Impressão de resultados usando puts
    puts(nome);
    puts(sobrenome);

    return 0;
}
