#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int* x;
	int y;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%i", &y);
	
	// A fun��o malloc aloca a quantidade de bytes que lhe � passada como argumento.
	// A linha abaixo aloca um tamanho de: y * tamanho_de(tipo inteiro).
	// Fala para o compilador que o que foi alocado vai ser um ponteiro pra um valor inteiro (int*)
	// O compilador n�o reconhece como matriz e nem sabe qual o tamanho da matriz, mas como a matriz
	// n�o � nada mais do que mem�ria que est� "do lado" da outra, qualquer soma dentro do tamanho
	// dessa matriz vai funcionar, na pr�tica, como uma matriz.
	x = (int*) malloc(y * sizeof(int));
	
	// Essa linha atribui o valor 5 no �ndice 2 da matriz.
	*(x + 2 * sizeof(int)) = 5;
	
	// Essa tamb�m. O compilador aceita essa nota��o, e na pr�tica, ele converte isso pra soma que est� l� em cima.
	x[2] = 5;
	
	// Importante: Caso o valor inserido para a matriz seja menos de 3, o programa vai apresentar
	// erro fatal nas duas linhas anteriores, pois o valor n�o foi alocado para a matriz mas est� sendo usado.
	// E caso n�o apresente erro fatal, outra parte da mem�ria do programa foi alterada, e isso pode vir a causar
	// erros no futuro, ou corrup��o de dados do programa.
	
	printf("Valor de x[2]: %i\n", x[2]);
	
	getch();
	return 0;
}