#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char pais[3];
	int ouro, prata, bronze;
}medalhas;

void imprimir_quadro(medalhas *quadro){
	printf("%s %d %d %d\n", quadro->pais, quadro->ouro, quadro->prata, quadro->bronze);	
}

void Sort(medalhas *V, int n)
{ 
  int i, j;
  medalhas aux;
      
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(V[j].ouro == V[j+1].ouro){
              	if(V[j].prata == V[j+1].prata){
              		if(V[j].bronze > V[j+1].bronze){
                        aux = V[j];
                        V[j] = V[j+1];
                        V[j+1] = aux;
                    }
            } else if(V[j].prata > V[j+1].prata){
                               aux = V[j];
                               V[j] = V[j+1];
                               V[j+1] = aux;
                       		}
              	} else if(V[j].ouro > V[j+1].ouro){
                               aux = V[j];
                               V[j] = V[j+1];
                               V[j+1] = aux;
                		}
                       
        }
    } 
}

int main(void){

	int qtd, i;
	medalhas *quadro;

	scanf("%d", &qtd);

	quadro = malloc(sizeof(medalhas)*qtd);

	for(i=0; i<qtd; i++){
		scanf("%s", quadro[i].pais);
		scanf("%d", &quadro[i].ouro);
		scanf("%d", &quadro[i].prata);
		scanf("%d", &quadro[i].bronze);
	}

	Sort(quadro, qtd);

	for(i=qtd-1; i>=0; i--){
		imprimir_quadro(&quadro[i]);
	}

	free(quadro);
		
	return EXIT_SUCCESS;
}
