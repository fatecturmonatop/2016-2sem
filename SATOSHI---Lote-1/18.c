#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int a,b,dif;

	printf("Digite o primeiro valor: ");
	scanf("%i",&a);	
	printf("Digite o segundo valor: ");
	scanf("%i",&b);

	if (a > b)
	{
		dif = a - b;
		printf("A diferença do menor para o maior é de %i.", dif);
	}
	else if (b == a)
	{
		printf("A diferença dos dois numeros é zero.");
	}
	else
	{
		dif = b - a;
		printf("A diferença do maior pelo menor é de %i",dif);
	}

	getch();

	return 0;
}