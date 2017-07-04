#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n, i, j, limite, flag, cont=0;

	double soma=0;

	scanf("%d", &n);
	
	limite = floor(sqrt(n));

	for(i=2; i<=n; i++)
	{	
		flag = 1;
		for(j=2; j<=limite; j++)
		{
			if(i != j && i % j == 0)
			{
				flag = 0; // não é primo
				break;
			}
		}
		if(flag)
		{
			soma += pow(-1,cont) * pow(i,-1);
			cont++;
		}
	}

	printf("%.7f", soma);


	return EXIT_SUCCESS;
}
