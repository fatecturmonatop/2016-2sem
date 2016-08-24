#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int atual, nascimento;
	int idade, idadetwo;
	
	printf("Digite o ano de nascimento: ");
	scanf("%i",&nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%i",&atual);
	
	idade = atual - nascimento;
	idadetwo = idade + 17;
	
	printf("Sua idade é de %i anos e daqui 17 anos terá %i anos", idade, idadetwo);
	
	getch();
	
	return 0;
}
