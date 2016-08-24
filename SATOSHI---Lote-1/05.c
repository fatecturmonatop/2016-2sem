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
   
	if (delta <0)
	{ 
		printf("O valor de delta  igual a %2.f\n", delta);
		printf("Logo, o valor é impossivel de ser calculado.\n");
	}
	else
	{
		//sqrt:vetor de raizes quadradas do elemento X.
		x1=((-B)+sqrt(delta))/(2*A);
		x2=((-B)-sqrt(delta))/(2*A);	

		raizA = x1;
		raizB = x2;

		printf("O valor da raiz A é de %.2f, e o da raiz B é de %.2f\n", raizA, raizB);
	}
	
	getch();
	
	return 0;
}

