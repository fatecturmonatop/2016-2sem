// 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225

#include <stdio.h>
#include <math.h>

int main()
{
	long double exp, base;
	
	printf("Digite a base: ");
	scanf("%Lf", &base);
	printf("Digite o expoente: ");
	scanf("%Lf", &exp);
	
	printf("Resultado: %lf", pow(base, exp));
	
	return 0;
}