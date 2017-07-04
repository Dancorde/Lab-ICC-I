#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    delta = (b*b)-(4*a*c);

    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    if (delta < 0)
    {
        printf("NAO EXISTE RAIZ REAL");
    }
    else if (delta == 0)
        {
            printf("%.3f", x1);
        }
        else
        {
            if (x1 < x2)
            {
                printf("%.3f %.3f", x1, x2);
            }
            else
            {
                printf("%.3f %.3f", x2, x1);
            }
        }
    return EXIT_SUCCESS;
}
