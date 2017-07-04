#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(void){
	
	int a, b, c, d, i, j, k;

	scanf("%d %d", &a, &b);

	int M[a][b];

	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &M[i][j]);
		}
	}

	scanf("%d %d", &c, &d);	

	int N[c][d];

	for(i=0; i<c; i++){
		for(j=0; j<d; j++){
			scanf("%d", &N[i][j]);
		}
	}


	/* Multiplica as matrizes */
	int R[a][d];

	for (i = 0; i<a; i++) 
   	{
      for (j = 0; j<d; j++) 
      	{
          R[i][j] = 0;                 
          for (k = 0; k<b; k++) 
          {
              R[i][j] += (M[i][k] * N[k][j]);
          } 
      	}
   	}


   	/* Imprime a matriz resultante */
	for (i = 0; i<a; i++) 
   	{
      for (j = 0; j<d; j++) 
      {   
        printf("%d", R[i][j]);
        if (j<(d-1)){
         	printf(" ");
        }
      }
      printf("\n");
   	}

	return EXIT_SUCCESS;
}
