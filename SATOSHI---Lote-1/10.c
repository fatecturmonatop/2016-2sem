#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	float a,b;

	printf("Digite o valor do numero A: ");
		scanf("%f",&a);
	printf("Digite o valor do numero B: ");
		scanf("%f",&b);
	
	printf("A diferença do valor %.2f para o valor %.2f é de: %.2f ",a,b,a-b);
	
	getchar();
	
	return 0;
}
