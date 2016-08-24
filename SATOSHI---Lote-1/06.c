#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


// A utility function to swap two elements
inline void swap ( float* a, float* b )
{
    float t = *a;
    *a = *b;
    *b = t;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float X, Y;

	printf("Digite o valor de X: ");
	scanf("%f", &X);	
	printf("Digite o valor de Y: ");
	scanf("%f", &Y);

	swap(X, Y);
	
	printf("X: %f\n Y:%fzn", X, Y);
	
	getch();

	return 0;
}

