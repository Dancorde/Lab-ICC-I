#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	char palavra[1000000];
	int tam, i, pali=1, aux;	

	scanf("%s", palavra);

	tam = strlen(palavra);

	aux = tam-1;

	for(i=0; i<tam; i++){
		if(palavra[aux] != palavra[i]){			
			pali = 0;
			break;
		}	
		aux--;
	}
	
	if(pali){
		printf("SIM");
	} else {
		printf("NAO");
	}
	
	return EXIT_SUCCESS;
}
