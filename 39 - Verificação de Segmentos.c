#include <stdio.h>
#include <stdlib.h>


void verifica(int *num1, int *num2, int tam1, int tam2){

	int i, j, contem=0;

	for(i=0; i<tam2-tam1+1; i++){
		for(j=0; j<tam1 && num1[j]==num2[j+i]; j++);
		if(j==tam1){
			contem = 1;
			break;
		}
	}
	if(contem){
		printf("SIM\n");
	} else {
		printf("NAO\n");
	}
}




int main(void){

	int n1, n2, tam1=0, tam2=0, aux, i;
	int *num1, *num2;


	scanf("%d", &n1);
	scanf("%d", &n2);

	aux = n1;

	do{
		aux = aux/10;
		tam1++;
	}while(aux != 0);

	aux = n2;

	do{
		aux = aux/10;
		tam2++;
	}while(aux != 0);

	num1 = (int *)malloc(sizeof(int)*tam1);
	num2 = (int *)malloc(sizeof(int)*tam2);

	aux = n1;

	for(i=tam1-1; i>=0; i--){
		num1[i] = aux%10;
		aux = aux/10;
	}

	aux = n2;

	for(i=tam2-1; i>=0; i--){
		num2[i] = aux%10;
		aux = aux/10;
	}


	if(n1 == n2){
		printf("%d %d SIM", n1, n2);
	} else if(n1<=n2){
		printf("%d %d ", n1, n2);
		verifica(num1, num2, tam1, tam2);
	} else {
		printf("%d %d ", n2, n1);
		verifica(num2, num1, tam2, tam1);
	}

	free(num1);
	free(num2);

	return EXIT_SUCCESS;
}
