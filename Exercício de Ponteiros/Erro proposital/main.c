#include <stdio.h> //Funcoes de I/O

/* Funcao main() */
    void main(){

    int x, *p;

    x = 10;
    *p = x;

    printf("\n%d\n", &p);
}

/*Jeito certo de fazer
    void main(){

    int x, *p;

    x = 10;
    p = x;

    printf ("%d", *p);
}
*/
