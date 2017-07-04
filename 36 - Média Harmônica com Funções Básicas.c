#include <stdio.h>
#include <stdlib.h>

int readInt(){
	int num;

	scanf("%d", &num);

	return(num);
}

double readDouble(){
	double num;

	scanf("%lf", &num);

	return(num);
}

void printDouble(double val){
	printf("%.2lf", val);
}

int main(void){
	int N, i;
	double media;

	N = readInt();

	for(i=0; i<N; i++){
		media += 1/(readDouble()+1);	
	}

	media = N / media -1;
	
	printDouble(media);

	return EXIT_SUCCESS;
}
