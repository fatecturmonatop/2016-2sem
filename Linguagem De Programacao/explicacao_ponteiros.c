#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int* x;
	int y;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%i", &y);
	
	// A função malloc aloca a quantidade de bytes que lhe é passada como argumento.
	// A linha abaixo aloca um tamanho de: y * tamanho_de(tipo inteiro).
	// Fala para o compilador que o que foi alocado vai ser um ponteiro pra um valor inteiro (int*)
	// O compilador não reconhece como matriz e nem sabe qual o tamanho da matriz, mas como a matriz
	// não é nada mais do que memória que está "do lado" da outra, qualquer soma dentro do tamanho
	// dessa matriz vai funcionar, na prática, como uma matriz.
	x = (int*) malloc(y * sizeof(int));
	
	// Essa linha atribui o valor 5 no índice 2 da matriz.
	*(x + 2 * sizeof(int)) = 5;
	
	// Essa também. O compilador aceita essa notação, e na prática, ele converte isso pra soma que está lá em cima.
	x[2] = 5; 
	
	// Importante: Caso o valor inserido para a matriz seja menos de 3, o programa vai apresentar
	// erro fatal nas duas linhas anteriores, pois o valor não foi alocado para a matriz mas está sendo usado.
	// E caso não apresente erro fatal, outra parte da memória do programa foi alterada, e isso pode vir a causar
	// erros no futuro, ou corrupção de dados do programa.
	
	printf("Valor de x[2]: %i\n", x[2]);
	
	getch();
	return 0;
}
