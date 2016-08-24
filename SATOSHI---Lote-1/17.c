#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/*	Calcule a quantidade de litros gastos em uma viagem, sabendo que o
	automóvel faz 12 km/l. Receber o tempo de percurso e a velocidade média. */

	int tempo, media;

	printf("Digite a quantidade de tempo do percurso, em horas: ");
	scanf("%i",&tempo);
	printf("Digite a velocidade média do veiculo: ");
	scanf("%i",&media);

	printf("A quantidade de litros gasta na viagem foi de %i", (tempo*media)/12);

	getch();

	return 0;
}