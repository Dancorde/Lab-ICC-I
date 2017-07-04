#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int N, i;
	float media, *notas;

	scanf("%d", &N);

	notas = malloc(sizeof(float)*N);

	for(i=0; i<N; i++){
		scanf("%f", &notas[i]);
		media += 1/(notas[i]+1);	
	}

	media = N / media -1;

	printf("%.2f", media);	

	return EXIT_SUCCESS;
}
