#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int num, fator, mult;
	
	scanf("%d", &num);

	fator = 2;

	while (num >1){
		mult = 0;
		while (num % fator == 0){
			num /= fator;
			mult++;
		}
		if(mult){
			printf("%d %d\n", fator, mult);
		}
		fator++;
	}
	
	return EXIT_SUCCESS;
}
