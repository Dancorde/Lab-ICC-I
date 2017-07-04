#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num, den, i;

	scanf("%d", &num);
	scanf("%d", &den);

	for(i=0; den<=num; i++)
	{
		num -= den;
	}
	
	printf("%d\n", i);
	printf("%d", num);

	return EXIT_SUCCESS;
}
