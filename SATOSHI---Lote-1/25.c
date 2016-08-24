#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Calcular o tempo de um jogo (hh:mm) sabendo que pode durar até 24h, começar em um dia e terminar em outro.

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	short hhi, mmi, hhf, mmf, hht, mmt;
	int t, tmp;
	
	do
	{
		printf("Insira a hora inicial: ");
		scanf("%hi", &hhi);
	} while(hhi < 0 || hhi > 24);
	do
	{
		printf("Insira os minutos iniciais: ");
		scanf("%hi", &mmi);
	} while(mmi < 0 || mmi > 60);
	do
	{
		printf("Insira a hora final: ");
		scanf("%hi", &hhf);
	} while(hhf < 0 || hhf > 24);
	do
	{
		printf("Insira os minutos finais: ");
		scanf("%hi", &mmf);
	} while(mmf < 0 || mmf > 60);
	
	if(hhf > hhi || (hhf == hhi && mmf < mmi)) // Não virou dia
	{
		t = (hhf-hhi)*60 + (mmf-mmi);
	}
	else // Virou 1 dia
	{
		t = (24*60) + ((hhf-hhi)*60) + (mmf-mmi);
	}

	hht = t / 60;
	mmt = t % (hht*60);

	printf("Tempo final: %hi:%hi", hht, mmt);

	getch();
	return 0;
}
