#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/* Receba a quantidade de horas trabalhadas, o valor por hora, o percentual
	de desconto e o número de descendentes. Calcule o salário que serão as
	horas trabalhadas x o valor por hora. Calcule o salário líquido (= Salário
	Bruto – desconto). A cada dependente será acrescido R$ 100 no Salário
	Líquido. Exiba o salário a receber. */

	int horas, perdesc, numdesc;
	double vph, sal, saliquido;

	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%i", &horas);
	printf("Digite o valor pago por hora: ");
	scanf("%lf", &vph);
	printf("Digite o percentual de desconto: ");
	scanf("%i", &perdesc);
	printf("Digite o número de descendentes: ");
	scanf("%i", &numdesc);
	
	sal = horas * vph;
	saliquido = (sal * ((100.0-perdesc)/100.0)) + numdesc*100.0;
	
	printf("Salário a receber: %.2lf", saliquido);

	getch();

	return 0;
}