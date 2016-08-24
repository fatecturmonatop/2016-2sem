// 1 + 2/3 + 3/5 + ... + 50/99

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	unsigned char t, u;
	double f;

	t = 1;
	u = 1;
	f = 0.0;

	for(t = 1; t <= 50; t++)
	{
		f += ((double)t/(double)(u));
		u += 2;
	}

	printf("%lf\n", f);
	getch();
	return 0;
}