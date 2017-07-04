#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int alunos, perguntas;
	int i, j;

	scanf("%d %d\n", &perguntas, &alunos);

	char gabarito[perguntas], respostas[alunos][perguntas+1];
	double notas[alunos];
	
	scanf("%s", gabarito);
	
	for(i=0; i<alunos; i++){
		notas[i] = 0;
		scanf("%s", respostas[i]);
	}
	
	for(i=0; i<alunos; i++){
		for(j=0; j<perguntas; j++){
			if(respostas[i][j] == gabarito[j]){
				notas[i] += 10.0/perguntas;
			}
		}
		printf("%.2lf\n", notas[i]);
	}


	return EXIT_SUCCESS;
}
