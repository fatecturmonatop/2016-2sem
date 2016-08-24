#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdarg.h>

inline void quickSortIterative (long long arr_check[], int l, int h, unsigned int num_arr, ...);
inline int partition (long long arr_check[], int l, int h, unsigned int num_arr, long long** arr);

// A utility function to swap two elements
inline void swapul ( unsigned long long* a, unsigned long long* b )
{
    unsigned long long t = *a;
    *a = *b;
    *b = t;
}
inline void swapl ( long long* a, long long* b )
{
    long long t = *a;
    *a = *b;
    *b = t;
}








int main()
{
	long long nums[5];
	unsigned char i;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Insira 4 números em ordem crescente, e um número qualquer.");
	
	for(i=0;i<4;i++)
	{
		lstart:
		printf("Número %hhu: ", i+1);
		scanf("%lld", &(nums[i]));
		if( i != 0 && nums[i] < nums[i-1] )
		{
			puts("Número inválido!");
			goto lstart;
		}
	}
	
	printf("Número %hhu: ", i+1);
	scanf("%lld", &(nums[i]));
	
	puts("Ordenando...");
	quickSortIterative(nums, 0, 4, 0);
	
	for(i=0;i<5;i++)
	{
		printf("Número %hhu: %lld\n", i+1, nums[i]);
	}
	
	return 0;
}














inline void quickSortIterative (long long arr_check[], int l, int h, unsigned int num_arr, ...)
{
	// Var args
	va_list vl;
	va_start(vl, num_arr);
	unsigned int b;
	long long** arr = (long long**)malloc(sizeof(*arr) * num_arr);
	for(b=0; b<num_arr;b++)
	{
		arr[b] = va_arg(vl, long long*);
	}
	
    // Create an auxiliary stack
    long long stack[ h - l + 1 ];

    // initialize top of stack
    int top = 1;

    // push initial values of l and h to stack
    stack[0] = l;
    stack[1] = h;

    // Keep popping from stack while is not empty
    while ( top >= 0 )
    {
        // Pop h and l
        h = stack[ top-- ];
        l = stack[ top-- ];

        // Set pivot element at its correct position in sorted array
        // printf("CHAMANDO PARTITION COM L=%d E H=%d\n", l, h);
        int p = partition( arr_check, l, h, num_arr, arr );
        // printf("PASSOU SEM ACESSO INDEVIDO COM RESULTADO p=%d\n", p);

        // If there are elements on left side of pivot,
        // then push left side to stack
        if ( p-1 > l )
        {
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }

        // If there are elements on right side of pivot,
        // then push right side to stack
        if ( p+1 < h )
        {
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
	
	va_end(vl);
}



inline int partition (long long arr_check[], int l, int h, unsigned int num_arr, long long** arr)
{
    long long x = arr_check[h];
    int i = (l - 1);

    int j;
	int b;

    for(j = l; j <= h- 1; j++)
    {
        if (arr_check[j] <= x)
        {
            ++i;
            swapl(&(arr_check[i]), &(arr_check[j]));
			for(b=0; b<num_arr;b++)
			{
				swapl(&(arr[b][i]), &(arr[b][j]));
			}
        }
    }
	
	swapl (&arr_check[i + 1], &arr_check[h]);
	for(b=0; b<num_arr;b++)
	{
		swapl(&(arr[b][i + 1]), &(arr[b][h]));
	}

    return (i + 1);
}