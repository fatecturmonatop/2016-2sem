// Mostre todas as possibilidades de 2 dados de forma que a soma tenha como resultado 7.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	unsigned short a, b, sp;

	printf("a + b ---> 7?\n", a, b);
	
	sp = 0;
	for(a=1; a<=6; a++)
	{
		for(b=1; b<=6; b++)
		{
			if(a+b == 7)
			{
				printf("%hi + %hi ---> 7\n", a, b);
				++sp;
			}
		}
	}

	printf("Total de combinações: %hi", sp);
	
	getch();
	return 0;
}