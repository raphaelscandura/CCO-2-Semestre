#include<stdio.h>
int main()
{

    int x = 4, y = 7;//Declara e inicializa variaveis
    int *px, *py;    //Declara ponteiros

    printf("x eh %d, y eh %d. \n", x, y);

    px = &x;         //Ponteiro px aponta para var x
    py = &y;         //Ponteiro py aponta para var y

    *px = *px + 10;  //Corresponde x = x + 10;
    *py += 2;        //Corresponde y +=2; -> y = y + 2;

    printf("Agora, x eh %d, y eh %d. \n", x, y);

    px = &x;         //Ponteiro px aponta para var x
    py = &y;         //Ponteiro py aponta para var y

    printf("Valores originais:\n");
    printf("px eh %p, py eh %p. \n", px, py);

    px = px + 10;    //10 enderecos de 4 bytes
    py += 2;         // 2 enderecos de 2 bytes

    printf("\nValores finais:\n");
    printf("px eh %p, py eh %p. \n", px, py);

return 0;
}
