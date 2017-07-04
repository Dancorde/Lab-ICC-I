#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int N, i, k; 
	double *V;	
	double X, aux;	
	
	scanf("%d", &N);

	V = malloc(sizeof(double)*N);
	
	for(i=0; i<N; i++){
		scanf("%lf", &V[i]);
	}
	
	for(k=0; k<N; k++){

		X=0;

		for(i=0; i<N; i++){
			aux = (M_PI/N) * (i + 0.5) * k;
			X += V[i] * cos(aux); 
		}

		printf("%.6lf\n", X);
	}

	free(V);

	return EXIT_SUCCESS;
}
