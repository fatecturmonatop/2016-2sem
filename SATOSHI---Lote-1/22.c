/*
	Receba 2 valores inteiros e diferentes. Mostre seus valores em ordem
	crescente.
*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int a,b,dif;

	printf("Digite o primeiro valor: ");
	scanf("%i",&a);
	do
	{
		printf("Digite o segundo valor: ");
		scanf("%i",&b);
	} while(b == a);
	

	if (a > b)
	{
		printf("%i\n", b);
		printf("%i\n", a);
	}
	else if (b < a)
	{
		printf("%i\n", a);
		printf("%i\n", b);
	}

	getch();

	return 0;
}