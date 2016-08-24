#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	short int a,b;

	printf("Digite o valor do primeiro Ângulo: ");
	scanf("%hi",&a);	
	
	printf("Digite o valor do segundo Ângulo: ");
	scanf("%hi",&b);	

	printf("O valor do terceiro ângulo é de %hi", 180 - (a + b));

	getch();

	return 0;
}
