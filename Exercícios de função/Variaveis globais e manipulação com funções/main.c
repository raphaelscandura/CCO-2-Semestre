#include <stdio.h>

int num;

int func(int a, int b);


void main(){
	int first = 0, sec = 50;

	num = 10;
	printf("Confira! Valor de num = %d\n",num);
	num += func(first, sec);

	printf("\n\nConfira! Valor de num = %d\n",num);
}


int func(int a, int b){
	a = (a+b)/2;
	num -= a;
	printf("\n\nConfira! Valor de num = %d\n",num);
	return a;
}
