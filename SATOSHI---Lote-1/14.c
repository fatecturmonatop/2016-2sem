#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	short int a,b;

	printf("Digite o valor do primeiro �ngulo: ");
	scanf("%hi",&a);	
	
	printf("Digite o valor do segundo �ngulo: ");
	scanf("%hi",&b);	

	printf("O valor do terceiro �ngulo � de %hi", 180 - (a + b));

	getch();

	return 0;
}
