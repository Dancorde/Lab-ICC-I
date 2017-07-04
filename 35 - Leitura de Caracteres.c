#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int i, tam=0;
	char *entrada=NULL, c;

	do{
		c = fgetc(stdin);
		entrada = (char*) realloc(entrada, sizeof(char)*(tam+1));
		entrada[tam++] = c;
	}while(c != 10);
	
	entrada[tam-1] = '\0';

	for(i=0; i<tam-1; i++){
		printf("%c\n", entrada[i]);
	}
	

	return EXIT_SUCCESS;
}
