/*
	Receba 3 coeficientes A, B, e C de uma equação do 2º grau da fórmula
	AX²+BX+C=0. Verifique e mostre a existência de raízes reais e se caso
	exista, calcule e mostre.
*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A,B,C;
	float raizA, raizB;
	float delta;
	float x1,x2;

	printf("Digite o valor de A :");
	scanf("%f", &A);	
	printf("Digite o valor de B :");
	scanf("%f", &B);
	printf("Digite o valor de C :");
	scanf("%f", &C);	

	delta = B*B - 4*A*C;

	if (delta < 0)
	{ 
		printf("O valor de delta é igual a %2.f\n", delta);
		printf("Logo, não existem raízes reais.\n");
	}
	else if(delta == 0)
	{
		x1=((-B)+sqrt(delta))/(2*A);

		raizA = x1;

		printf("Apenas existe uma raiz real, pois delta é zero. Valor: %.2f\n", raizA);
	}
	else
	{
		x1=((-B)+sqrt(delta))/(2*A);
		x2=((-B)-sqrt(delta))/(2*A);	

		raizA = x1;
		raizB = x2;

		printf("O valor da raiz A é de %.2f, e o da raiz B é de %.2f\n", raizA, raizB);
	}

	getch();

	return 0;
}

