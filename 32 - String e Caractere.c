#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int conta_char(char *string, char letra){
	int i, cont=0;

	for(i=0; i<strlen(string); i++){
		if(string[i] == letra){
			cont++;
		}
	}

	return cont;
}

int main(void){
	
	int tam=0;
	char *string=NULL, c;	

	do{
		c = fgetc(stdin);
		string = (char*)realloc(string, sizeof(char)*(tam));
		string[tam++] = c;
	}while(c != 10);
	
	string[tam-1] = '\0';

	scanf("%c", &c);

	printf("%d\n", conta_char(string, c));
	
	free(string);

	return EXIT_SUCCESS;
}
