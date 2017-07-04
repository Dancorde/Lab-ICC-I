#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(void){
	
	int i, tam=0, cont=0;
	char nome[30][30], c;

	do{
		c = fgetc(stdin);

		if(c != 32){
			nome[cont][tam++] = c;
		} else {
			nome[cont][tam] = '\0';
			cont++;
			tam = 0;
		}
	}while(c != 10);
	
	nome[cont][tam] = '\0';

	for(i=0; i<strlen(nome[cont])-1; i++){
		printf("%c", toupper(nome[cont][i]));
	}

	printf(",");

	for(i=0; i<cont; i++){
		printf(" %s", nome[i]);
	}
	printf("\n");



	return EXIT_SUCCESS;
}
