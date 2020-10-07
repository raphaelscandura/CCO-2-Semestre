#include <stdio.h>

void incremento();
void incremento2();

int x = 0;

int main(){
    int x = 0;

    printf("de x dentro da funcao main: %d\n", x);
    incremento();

    printf("de x dentro da funcao main: %d\n", x);
    incremento2();

    return 0;
}

void incremento(){
    int x;

    x = 1;
    x++;
    printf("de x dentro da funcao incremento: %d\n", x);
}

void incremento2(){
    x++;
    printf("de x dentro da funcao incremento2: %d\n", x);
}
