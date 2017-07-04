#include <stdio.h>
#include <stdlib.h>


int verifica_linhas(int **M, int n){

	int i, j;
	int *soma, total;

	soma = (int *)calloc(n, sizeof(int)); //inicializa o vetor de soma em 0

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			soma[i] += M[i][j]; //soma cada linha
		}
	}

	for(i=0; i<n-1; i++){
		if(soma[i] != soma[i+1]){ //verifica se os valores são iguais
			free(soma);
			return 0;
		}
	}

	total = soma[0];
	free(soma);

	return total;
}


int verifica_diag(int **M, int n){

	int i;
	int diag1=0, diag2=0;

	for(i=0; i<n; i++){
		diag1 += M[i][i]; //soma a diagonal principal
	}

	for(i=0; i<n; i++){
		diag2 += M[i][n-i-1]; //soma a diagonal secundaria
	}

	if(diag1 == diag2){
		return diag1;
	} else {
		return 0;
	}

}


int main(void){

	int i, j, n;
	int **M;

	scanf("%d", &n);

	M = (int **)calloc(n, sizeof(int *)); //inicializa a matriz

	for(i=0; i<n; i++){
		M[i] = (int *)calloc(n, sizeof(int));
		for(j=0; j<n; j++){
			scanf("%d", &M[i][j]);
		}
	}


	if(verifica_linhas(M, n) && (verifica_linhas(M, n) == verifica_diag(M, n))){
		printf("SIM\n");
	} else {
		printf("NAO\n");
	}

	for(i=0; i<n; i++){
		free(M[i]);
	}

	free(M);	

	return EXIT_SUCCESS;
}
