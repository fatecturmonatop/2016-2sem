#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	double salario, salariof;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o seu salario: \n");
	scanf("%lf", &salario);
	
	salariofinal = salario *1.15;
	printf("Seu novo salario é de %2.lf", salariofinal);
	getch();
}