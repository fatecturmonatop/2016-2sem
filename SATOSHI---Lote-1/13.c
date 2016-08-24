#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float peso, pesogramas;
	double dias;
	int tempo;

	tempo = 50;

	printf("Digite a quantidade de alimentos em quilos: ");
	scanf("%f", &peso);

	pesogramas = peso*1000;
	dias = pesogramas/tempo;

	printf("Essa quantidade de alimento irá durar aproximadamente %lf dias.", dias);

	getch();

	return 0;	
}
