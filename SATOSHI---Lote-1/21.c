/*
Receba 4 notas bimestrais de um aluno. Calcule e mostre a média aritmética.
Mostre a mensagem de acordo com a média:
a. Se a média for >= 6,0 exibir “APROVADO”;
b. Se a média for >= 3,0 ou < 6,0 exibir “EXAME”;
c. Se a média for < 3,0 exibir “RETIDO”.
*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n1,n2,n3,n4,media,somaAritmetica;


	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4);
	
	media = ((n1+n2+n3+n4)/4);
	
	
	
	 if (media >= 6)
		printf("APROVADO");
	 else if (media >= 3 or media <6)
		printf("EXAME");
	 else if (media < 3)
		printf("RETIDO");

	getch();

	return 0;
}