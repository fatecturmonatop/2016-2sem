#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	long double exp, base;
	
	printf("Digite a base: ");
	scanf("%Lf", &base);
	printf("Digite o expoente: ");
	scanf("%Lf", &exp);
	
	printf("Resultado: %lf", pow(base, exp));
	
	getch();
	
	return 0;
}