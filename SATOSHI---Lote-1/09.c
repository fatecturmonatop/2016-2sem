#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	int a,b;

	printf("Digite o valor do numero A: ");
	scanf("%i",&a);
	printf("Digite o valor do numero B: ");
	scanf("%i",&b);
	
	printf("A soma dos quadrados dos valores tem como resultado: %i",a*a+b*b);
	
	return 0;
}
