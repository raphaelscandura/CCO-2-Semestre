#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta = 1;
    float salario = 40000.0;
    char ch = 'a';

    printf("\nEndereco de memoria da conta em decimal eh: %u ", &conta);
    printf("\nEndereco de memoria do salario em decimal eh: %u ", &salario);
    printf("\nEndereco de memoria do ch em decimal eh: %u \n", &ch);

        printf("\nEndereco de memoria da conta em hexadecimal eh: %x ", &conta);
    printf("\nEndereco de memoria do salario em hexadecimal eh: %x ", &salario);
    printf("\nEndereco de memoria do ch em hexadecimal eh: %x \n", &ch);

    return 0;
}
