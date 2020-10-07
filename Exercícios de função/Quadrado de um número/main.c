#include <stdio.h>
#include <stdlib.h>

int Quadrado(int num);

int main()
{
    int resultado, numeroUsuario;

    printf("Digite um numero\n");
    scanf("%i", &numeroUsuario);

    resultado = Quadrado(numeroUsuario);

    printf("\nO quadrado de %i eh igual a %i\n", numeroUsuario, resultado);
    return 0;
}

int Quadrado (int num){
    int resp;
    resp = num * num;
    return resp;
}
