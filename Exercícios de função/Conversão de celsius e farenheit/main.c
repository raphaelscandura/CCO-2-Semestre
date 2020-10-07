#include <stdio.h>
#include <stdlib.h>

float conversaoDeCelsius(float fahr);

int main()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em Fahrenheit que deseja converter\n");
    scanf("%f", &fahrenheit);

    celsius = conversaoDeCelsius(fahrenheit);

    printf("\nEssa temperatura em graus celsius eh igual a %.2f\n", celsius);


    return 0;
}

float conversaoDeCelsius(float fahr){
    float c;
    c = (fahr - 32.0)*5.0/9.0;
    return c;
}
