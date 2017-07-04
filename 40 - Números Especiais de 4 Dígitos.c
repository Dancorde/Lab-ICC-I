#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int i;
	double raiz;
	
	for(i=1000; i<10000; i++){

		raiz = sqrt(i);

		if(raiz == (i/100 + i%100)){
			printf("%d\n", i);
		}		
	}
	
	return EXIT_SUCCESS;
}
