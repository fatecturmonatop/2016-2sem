#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/*	Calcule a quantidade de litros gastos em uma viagem, sabendo que o
	autom�vel faz 12 km/l. Receber o tempo de percurso e a velocidade m�dia. */

	int tempo, media;

	printf("Digite a quantidade de tempo do percurso, em horas: ");
	scanf("%i",&tempo);
	printf("Digite a velocidade m�dia do veiculo: ");
	scanf("%i",&media);

	printf("A quantidade de litros gasta na viagem foi de %i", (tempo*media)/12);

	getch();

	return 0;
}