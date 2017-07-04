#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n, i, j, limite, flag;

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
			}
		}
		if(flag)
		{
			if(i==2) printf("%d", i);
			else printf(" %d", i);
		}
	}

	printf("\n");


	return EXIT_SUCCESS;
}
