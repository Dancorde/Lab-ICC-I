#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_media(int *S, int tam){

	int i;
	double media=0;

	for(i=0; i<tam; i++){
		media += S[i];
	}
	
	return media/tam;
}

int main(void)
{
	int tam=0, i, aux, *S;
	double media, *T;

	S = malloc(tam * sizeof(int));

	do{
		scanf("%d", &aux);

		if(aux){
 			S = realloc(S, (tam + 1) * sizeof(int));
			S[tam] = aux;
			tam++;
		}
	
	}while(aux);
	
	media =  calc_media(S, tam);

	T = malloc((tam-2) * sizeof(double));
	
	for(i=1; i<tam-1; i++){
		T[i-1] = (S[i] * S[i])/(media * (S[i-1] + S[i] + S[i+1]) / 3.0);
	}

	for(i=0; i<tam-2; i++){
		printf("%.4lf\n", T[i]);
	}

	free(S);
	free(T);

	return EXIT_SUCCESS;
}
