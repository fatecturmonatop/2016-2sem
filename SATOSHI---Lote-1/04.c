#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	double tempC, tempF;

	printf("Digite o valor da temperatura em Celsius: ");
	scanf("%lf",&tempC);

	tempF = tempC * 1.8 + 32;

	printf("O valor da temperatura em Fahrenheit é de: %2.f", tempF);

	getch();

	return 0;
}