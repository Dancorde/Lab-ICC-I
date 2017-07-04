#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N, i, *V, min, max;

	scanf("%d", &N);

	V = malloc(sizeof(int)*N);
	
	for(i=0; i<N; i++)
	{	
		scanf("%d", &V[i]);
	}

	min = V[0];
	max = V[0];

	for(i=0; i<N; i++)
	{
		if(min > V[i])
		{
			min = V[i];
		}
		if(max < V[i])
		{
			max = V[i];
		}
	}
	
	printf("max: %d\n", max);
	printf("min: %d", min);
	
	return EXIT_SUCCESS;
}
