#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Receba um valor inteiro. Verifique e mostre se é divisível por 2 e 3.


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;

	scanf("%i", &n);

	if ( n % 3 == 0 && n % 2 == 0 && n >= 3 )
		printf("É");
	else
		printf("Não é");

	printf(" divisível por dois e três");
	getch();
	return 0;
}