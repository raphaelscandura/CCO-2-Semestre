#include <stdio.h>

int main()
{

    int x = 4, y = 7;//Declara e inicializa variaveis
    int *py, *px;    //Declara ponteiros

    printf("\nx eh %d, y eh %d.\n", x, y);

    px = &x;         //O ponteiro px apontar para var x
    py = &y;         //O ponteiro py apontar para var y
    px = py;         //O ponteiro px e py apontar para var y

    if (px == py) {
        printf("\nAgora eles sao iguais!\n");
        printf("\npx %u py %u\n", px, py);
        printf("\n*px %d *py %d\n", *px, *py);
    }

return 0;
}//Fim da funcao main()
