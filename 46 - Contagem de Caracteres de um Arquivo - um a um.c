#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

	FILE *arquivo;
	char nome[50];
	int c, cont=0;

	scanf("%s", nome);

	arquivo = fopen(nome, "r");

	if(arquivo == NULL)
  	{
    	//printf("Erro na abertura do arquivo!");
    	return EXIT_FAILURE;
  	}

  	while ((c = fgetc(arquivo)) != EOF){
    	cont++;
	}

    printf("%d\n", cont);

    fclose(arquivo);
		
	return EXIT_SUCCESS;


}
