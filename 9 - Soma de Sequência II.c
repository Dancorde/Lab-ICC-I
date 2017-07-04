#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N, i;
	double soma=0;

	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		soma += pow(-1,i-1) / i;
	}

	printf("%.4f", soma);
	
	return EXIT_SUCCESS;
}
