#include <stdio.h>
#include <conio.h>
#include <locale.h>



int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ladoA, area;
	
	printf("Digite o lado do quadrado\n: ");
	scanf("%i", &ladoA);
	
	area = ladoA * ladoA;
	
	printf("A área do quadrado equivale a: %i", area);
	
	getch();
	
	return 0;
}