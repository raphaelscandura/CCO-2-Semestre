#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b);

int main()
{
    int num1, num2, resultado;

    printf("Digite o primeiro numero a ser somado\n");
    scanf("%i", &num1);
    printf("\nDigite o segundo numero a ser somado\n");
    scanf("%i", &num2);

    resultado = Soma (num1,num2);

    printf("\nA soma de %i e %i eh igual a %i\n",num1,num2, resultado);

    return 0;
}

int Soma(int a, int b){
    int valor;

    valor = a + b;

    return valor;
}
