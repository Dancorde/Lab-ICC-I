#include <stdio.h>
#include <stdlib.h>

int main(void){

	int K, t;
	double r, aux, *x;

	
	scanf("%lf", &aux);
	scanf("%lf", &r);
	scanf("%d", &K);

	x = (double *)calloc(K+1, sizeof(double));	

	x[0] = aux;

	for(t=1; t<=K; t++){
		x[t] = r * x[t-1] * (1 - x[t-1]);
	}

	for(t=1; t<=K; t++){
		printf("%d %.6lf\n", t, x[t]);
	}

	free(x);

	return EXIT_SUCCESS;
}