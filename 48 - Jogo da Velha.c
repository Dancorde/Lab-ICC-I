#include <stdio.h>
#include <stdlib.h>

int verificaColuna(int jogo[][3]){

	int i;

	for(i=0; i<3; i++){
		if(jogo[0][i] == jogo[1][i] && jogo[0][i] == jogo[2][i] && jogo[1][i] == jogo[2][i]){
			if(jogo[0][i] == 0){
				return 0;
			}else if(jogo[0][i] == 1){
				return 1;
			}
		}
	}

	return -1;
}

int verificaLinha(int jogo[][3]){

	int i;

	for(i=0; i<3; i++){
		if(jogo[i][0] == jogo[i][1] && jogo[i][0] == jogo[i][2] && jogo[i][1] == jogo[i][2]){
			if(jogo[i][0] == 0){
				return 0;
			}else if(jogo[i][0] == 1){
				return 1;
			}
		}
	}

	return -1;
}

int verificaDiagonais(int jogo[][3]){

	if(jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] == jogo[2][2]){
		if(jogo[0][0] == 0){
			return 0;
		}else if(jogo[0][0] == 1){
			return 1;
		}
	}

	if(jogo[0][2] == jogo[1][1] && jogo[2][0] == jogo[0][2] && jogo[1][1] == jogo[2][0]){
		if(jogo[0][0] == 0){
			return 0;
		}else if(jogo[0][0] == 1){
			return 1;
		}
	}	

	return -1;
}

void verificaJogo(int jogo[][3]){

	int linhas, colunas, diagonais;

	linhas = verificaLinha(jogo);
	colunas = verificaColuna(jogo);
	diagonais = verificaDiagonais(jogo);

	if(linhas == 0)
		printf("%d", 0);
	else if(linhas == 1)
		printf("%d\n", 1);
	else if(colunas == 0)
		printf("%d", 0);
	else if(colunas == 1)
		printf("%d\n", 1);
	else if(diagonais == 0)
		printf("%d", 0);
	else if(diagonais == 1)
		printf("%d", 1);
	else 
		printf("empate");
}

int main(void){

	int jogo[3][3];
	int x, y, rodada=0, i, j;

	for(i=0; i<3; i++){
		for (j = 0; j < 3; j++)
		{
			jogo[i][j] = 2;
		}
	}

	while(scanf("%d %d", &x, &y) != EOF) {
		jogo[x][y] = (rodada%2);
		rodada++;
	}

	verificaJogo(jogo);

	return EXIT_SUCCESS;
}