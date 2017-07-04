#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_dist(float x1, float x2, float y1, float y2){

	double dist;

	dist = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

	return dist;
}

int main(void)
{	
	int i, tam;
	
	scanf("%d", &tam);

	float pontos[tam][2];
	double comp=0;

	for(i=0; i<tam; i++){
		scanf("%f %f", &pontos[i][0], &pontos[i][1]);  
	}

	for(i=0; i<tam-1; i++){
		comp += calc_dist(pontos[i][0], pontos[i+1][0], pontos[i][1], pontos[i+1][1]);
	}

	printf("%.4lf", comp);

	return EXIT_SUCCESS;
}
