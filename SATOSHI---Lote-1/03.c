#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base,altura;
	float area;
	
	printf("Digite a base do triângulo: ");
		scanf("%i", &base);
	printf("Digite a altura do triângulo: ");
		scanf("%i", &altura);
	
	area = base*altura/2;
	
	printf(" A area do triângulo equivale a %2.f", area);
	
	getch(); //getch ou getche, tanto faz
}