#include <stdio.h>
#include <stdlib.h>


int main(void){

	int N, soma=0;

	scanf("%d", &N);

	while(N>0){
		soma += N%10;
		N=N/10;
	}

	printf("%d", soma);

	return EXIT_SUCCESS;
}
