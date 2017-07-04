#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N, i;
	double soma=0;
	double aux;
	scanf("%d", &N);
	
	for(i=0; i<=N; i++)
	{
		aux = N-i+1;
		soma += (i / aux );
	}

	printf("%.4f", soma);
	
	return EXIT_SUCCESS;
}
