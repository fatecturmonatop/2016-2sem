#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double cat1,cat2,h,hip;
	
	printf("Digite o valor do primeiro cateto: ");
	scanf("%lf",&cat1);
	printf("Digite o valor do segundo cateto: ");
	scanf("%lf",&cat2);

	h = cat1*cat1 + cat2*cat2;
	hip = sqrt(h);

	printf("O valor da hipotenusa é de %lf",hip);

	getch();

	return 0;
}
