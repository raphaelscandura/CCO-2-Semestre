#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //API para Windows que será usada para mudar as cores

int main()
{
    //Digitar um número e imprimir antecessor e sucessor

    int n;

    printf("Digite um numero\n");
    scanf("%i", &n);

    printf("O antecessor desse numero eh: %i\n\n", (n-1));
    printf("O sucessor desse numero eh: %i\n", (n+1));

    printf("------------------------------------------------------\n\n");

    //Imprimir uma variavel do tipo numerico, caractere e decimal

    int numero = 5;
    char letra = 'D';
    float decimal = 1.50;

    printf("Isso eh uma variavel definida do tipo numerico = %i\n\n", numero);
    printf("Isso eh uma variavel definida do tipo caractere = %c\n\n", letra);
    printf("Isso eh uma variavel definida do tipo decimal = %.2f\n\n", decimal);

    printf("------------------------------------------------------\n\n");

    //Imprimir uma mensagem colorida no prompt

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

    printf("Bom Dia\n\n");

    //Voltando a cor original

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    printf("------------------------------------------------------\n\n");

    //Receber uma entrada do usuário e imprimir essa entrada como caractere, binário, hexadecimal e em octal


    char caractere;

    printf("Digite uma letra\n");
    scanf("%c", &caractere);

    printf("A sua letra em forma de caractere eh: %c\n", caractere);
    printf("A sua letra em forma de decimal eh: %d\n", caractere);
    printf("A sua letra em forma de caractere eh: %x\n", caractere);
    printf("A sua letra em forma de caractere eh: %o\n", caractere);

    return 0;
}
