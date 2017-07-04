#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{	
	int caracter=0, digito=0, i, tam=0;
	char *entrada=NULL, c;
	
	do{
		c = fgetc(stdin);
		tam++;
		entrada = (char*)realloc(entrada, sizeof(char)*tam);
		entrada[tam] = c;

	}while(c != 10);
	
	entrada[tam+1] = '\0';
	
	for(i=0; i<tam; i++){
		if(isdigit(entrada[i])){
			digito++;
		}
		if(isalpha(entrada[i])){
			caracter++;
		}
	}

	printf("%d\n%d", caracter, digito);

	free(entrada);

	return EXIT_SUCCESS;
}
