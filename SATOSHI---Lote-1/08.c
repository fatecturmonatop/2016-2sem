#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main
{
	setlocale(LC_ALL, "portuguese");

	float poup, dep, ganho;

	printf("Digite o valor do depósito: \n");
	scanf("%f", &dep);
	
	ganho = dep*1.013;
	poup = poup + ganho;
	
	printf("O valor do deposito após 1 mês de uso é de %.2f\n", ganho);
	printf("A quantia final na poupança é de %.2f\n", poup);

	getch();
	
	return 0;
}