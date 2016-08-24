#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	double pi, ci, r;
	pi = 3.14;
	
	printf("Digite o tamanho do raio: ");
	scanf("%lf", &raio);
	
	ci = r*pi;
	
	printf("O comprimento da circunferência é de: %.2lf",ci);
	
	getch();
	
	return 0;
}
