#include <stdio.h>
#include <conio.h>

int main()
{
    char ch_01, ch_02; //criação das variáveis

    printf("Digite um caractere para ser lido com getch\n"); //Mensagem para o usuário
    ch_01 = getch(); //Uso da função para ler e armazenar um caractere sem exebir na tela

    printf("Digite um caractere para ser lido com getche\n"); //Mensagem para o usuário
    ch_02 = getche(); //Uso da função para ler e armazenar um caractere que aparece na tela

    printf("\n------------------------------------------\n"); //Divisão para não causar confusão visual

    printf("Caractere lido com getch %c\n", ch_01); //Impressão de resultado final
    printf("Caractere lido com getche %c\n", ch_02); //Impressão de resultado final


    return 0; //Fim da função
}
