#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int ano;

    scanf("%d",&ano);

    if ((ano%4) == 0)
    {
        printf("SIM");
    }
    else
    {
        printf("NAO");
    }

    return EXIT_SUCCESS;
}
