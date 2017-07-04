#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, N;

	scanf("%d", &N);

	double V[N], media=0, desvio=0;

	for(i=0; i<N; i++)
	{
		scanf("%lf", &V[i]);
	}
	
	for(i=0; i<N; i++)
	{
		media += V[i]/N;
	}
	
	for(i=0; i<N; i++)
	{
		desvio += (pow(V[i] - media, 2))/N;
	}

	printf("%.4lf\n", media);
	printf("%.4lf", sqrt(desvio));
	
	
	return EXIT_SUCCESS;
}
