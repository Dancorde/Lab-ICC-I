#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void QuickSort(char *V, int e, int d){
    int i = e;
    int j = d;
    char x, aux;

    x = V[(i+j) / 2];

    do{
        while (V[i] < x)
            i++;
        while (x < V[j])
            j--;
        if(i <= j)
        {
            aux = V[i];
            V[i++] = V[j];
            V[j--] = aux;
        }
    }while(i <= j);

    if(e < j)
        QuickSort(V,e,j);
    if(i < d)
        QuickSort(V,i,d);
}

char *lerLinha(){

	int tam=0;
	char *entrada=NULL, c;

	do{
		c = fgetc(stdin);
		if(c != 10){
			entrada = (char*) realloc(entrada, sizeof(char)*(tam+1));
			entrada[tam++] = c;
		}
	}while(c != 'x');

	entrada[tam] = '\0';

	return entrada;
}

int main(void){

	int i, *inteiros;
	char *entrada;

	entrada = lerLinha();	

	QuickSort(entrada ,0, strlen(entrada)-1);

	inteiros = (int *)&entrada[0];


	for(i=0; i<strlen(entrada)/4; i++){
		printf("%d\n", inteiros[i]);
	}

	free(entrada);
	
	return EXIT_SUCCESS;
}
