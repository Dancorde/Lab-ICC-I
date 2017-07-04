#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, dia, maior;
	int vendas[31];
	
	for(i=0; i<31; i++){
		scanf("%d", &dia);
		vendas[i] = dia;
	}
	
	maior = vendas[0];

	for(i=0; i<31; i++){
		if(vendas[i] > maior){
			maior = vendas[i];
		}
	}
	
	printf("%d\n", maior);	

	for(i=0; i<31; i++){
		if(vendas[i] == maior){
			printf("%d\n", i+1);
		}
	}

	return EXIT_SUCCESS;
}
