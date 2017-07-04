#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int jogada, i, maior;
	int dados[6];
	
	for(i=0; i<6; i++){
		dados[i] = 0;
	}

	while(scanf("%d", &jogada) != EOF){
		dados[jogada-1]++;
	}
	
	maior = dados[0];

	for(i=0; i<6; i++){
		if(dados[i] > maior){
			maior = dados[i];
		}
	}

	for(i=0; i<6; i++){
		if(dados[i] == maior){
			printf("%d\n", i+1);
		}
	}
	
	printf("%d\n", maior);

	return EXIT_SUCCESS;
}
