#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
	int hora, min, seg;
	char nome[200];	
}evento;

void imprimir_evento(evento *even){
	printf("%02d/%02d/%04d - %02d:%02d:%02d\n", even->dia, even->mes, even->ano, even->hora, even->min, even->seg);
	printf("%s", even->nome);	
}

char *ler_evento(){
	char c;
	char *string = NULL;
	int tam = 0;

	do {
		c = fgetc(stdin);
		
		string=(char *)realloc(string,sizeof(char)*(tam+1));
		string[tam++] = c;
	} while (c != 10);
	string[tam-1] = '\0';
	
	return string;
}

int main(void){

	int qtd, i;
	evento *agenda;

	scanf("%d", &qtd);

	agenda = malloc(sizeof(evento)*qtd);

	for(i=0; i<qtd; i++){
		scanf("%d", &agenda[i].dia);
		scanf("%d", &agenda[i].mes);
		scanf("%d", &agenda[i].ano);
		scanf("%d", &agenda[i].hora);
		scanf("%d", &agenda[i].min);
		scanf("%d", &agenda[i].seg);
		fgets(agenda[i].nome, 200, stdin);
		fgets(agenda[i].nome, 200, stdin);
	}

	for(i=0; i<qtd; i++){
		imprimir_evento(&agenda[i]);
	}

	free(agenda);
		
	return EXIT_SUCCESS;
}
