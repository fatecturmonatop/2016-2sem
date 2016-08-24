#include <string.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Calculo de volume de  um paralelepipido
//ainda não finalizado 

int main()
{
	setlocale(LC_ALL, "portuguese");

	int comp, larg, alt;
	int vol, area;

	printf("Digite o comprimento do paralelepípedo: \n");
	scanf("%i", &comp);
	printf("Digite a largura do paralelepipido: \n");
	scanf("%i", &larg);
	printf("Digite a altura do paralelepipido: \n");
	scanf("%i", &alt);

	area = larg*alt;
	vol = area*alt;

	printf("O valor da area do paralelepipido é de %i, e o valor do seu volume é de %i", area, vol);

	getch();
	
	return 0;
}