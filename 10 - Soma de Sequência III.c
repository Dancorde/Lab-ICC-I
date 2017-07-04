#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N, i;
	double aux=1;

	scanf("%d", &N);

	double soma = 0;
	
	for(i=N; i>0; i--)
	{	
		soma += aux / i;
		aux += 2;
	}
	
	printf("%.4f", soma);
	
	return EXIT_SUCCESS;
}
