#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main
{
	setlocale(LC_ALL, "portuguese");

	float poup, dep, ganho;

	printf("Digite o valor do dep�sito: \n");
	scanf("%f", &dep);
	
	ganho = dep*1.013;
	poup = poup + ganho;
	
	printf("O valor do deposito ap�s 1 m�s de uso � de %.2f\n", ganho);
	printf("A quantia final na poupan�a � de %.2f\n", poup);

	getch();
	
	return 0;
}