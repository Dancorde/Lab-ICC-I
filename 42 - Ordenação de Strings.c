#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	int i, j, N;

	scanf("%d", &N);

	char entrada[N][50];
	char aux[100];

	for(i=0; i<N; i++){
		scanf("%s", entrada[i]);
	}	

	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(strcmp(entrada[i], entrada[j]) > 0){
				strcpy(aux, entrada[i] );
         		strcpy( entrada[i], entrada[j] );
         		strcpy( entrada[j], aux) ;
			}
		}
	}

	for(i=0; i<N; i++){
		printf("%s\n", entrada[i]);
	}
		
	return EXIT_SUCCESS;
}
