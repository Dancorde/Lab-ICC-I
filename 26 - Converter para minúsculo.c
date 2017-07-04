#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{	
	int tam=0;
	char *entrada=NULL, c;
	
	do{
		c = fgetc(stdin);
		entrada = (char*)realloc(entrada, sizeof(char)*(tam+1));
		entrada[tam++] = c+32;
	}while(c != 10);
	
	entrada[tam-1] = '\0';
	
	printf("%s\n", entrada);

	free(entrada);

	return EXIT_SUCCESS;
}
