#include <stdio.h>
#include <stdlib.h>

void insertionSort(float *v, int n){

    int i, j;
    float aux;

    for(j=1; j<n; j++)
    {
        aux = v[j];
        i = j-1;
        while(i >= 0 && v[i] > aux)
        {
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = aux;
    }
}

void QuickSort(float *V, int e, int d){
    int i = e;
    int j = d;
    float x;
    float aux;

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

void conta(float V[], int N){

	int i, cont=1;

	for(i=0; i<N; i++){
		if(V[i] == V[i+1]){
			cont++;
		} else {
			printf("%.1f %d\n",V[i], cont);
			cont = 1;
		}
	}

}

int main(void){

	int N, i;
	float *num;

	scanf("%d", &N);

	num = malloc(sizeof(float)*N);

	for(i=0; i<N; i++){
		scanf("%f", &num[i]);
	}

    //insertionSort(num, N);
	QuickSort(num, 0, N-1);

	conta(num, N);

	free(num);

	return EXIT_SUCCESS;
}
