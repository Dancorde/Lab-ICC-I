#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[500], CPF[14];
	int idade;
}cadastro;

int main(void){

	FILE *arquivo1, *arquivo2;
	char nome1[50], nome2[50];
	int qtd=0, i, j;

	cadastro *lista = NULL, aux;

	scanf("%s", nome1);
	scanf("%s", nome2);

	arquivo1 = fopen(nome1, "r");
	arquivo2 = fopen(nome2, "r");

	if(arquivo1 == NULL || arquivo2 == NULL)
  	{
    	//printf("Erro na abertura do arquivo!");
    	return EXIT_FAILURE;
  	}

  	while(!feof(arquivo1)){
  		lista = (cadastro *)realloc(lista, sizeof(cadastro)*(qtd+1));
  		fscanf(arquivo1, "%s\n", lista[qtd].CPF);
  		fgets(lista[qtd].nome, sizeof(lista[qtd].nome), arquivo1);
  		fscanf(arquivo1, "%d\n", &lista[qtd].idade);
  		qtd++;
  	}

	/*
	while ((leitura = getline(&linha, &tam, arquivo2)) != -1) {
		printf("%s", linha);
	}
	*/


	while(!feof(arquivo2)){
  		lista = (cadastro *)realloc(lista, sizeof(cadastro)*(qtd+1));
  		fscanf(arquivo2, "%s\n", lista[qtd].CPF);
  		fgets(lista[qtd].nome, sizeof(lista[qtd].nome), arquivo2);
  		fscanf(arquivo2, "%d\n", &lista[qtd].idade);
  		qtd++;
  	}

  	for(i=0; i<qtd-1; i++){
  		for (j=i+1; j<qtd; j++){
  			if(strcmp(lista[i].CPF, lista[j].CPF) > 0){
  				aux = lista[i];
  				lista[i] = lista[j];
  				lista[j] = aux;
  			}
  		}
  	}


	for(i=0; i<qtd; i++){
		printf("%s\n", lista[i].CPF);
		printf("%s", lista[i].nome);
		printf("%d\n", lista[i].idade);
	}


	free(lista);
  	fclose(arquivo1);
  	fclose(arquivo2);

	return EXIT_SUCCESS;
}