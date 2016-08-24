#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/* Receba 2 valores reais. Calcule e mostre o maior deles. */

	float a,b;

	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);

	if (a > b)
		printf("O valor A de %.2f é o maior entre os dois.",a);

	else if (b > a)
		printf("O valor B de %.2f é o maior entre os dois.",b);

	else
		printf("O valor de ambos são iguais.");

	getch();
	
	return 0;
}