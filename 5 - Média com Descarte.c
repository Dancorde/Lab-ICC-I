#include <stdio.h>
#include <stdlib.h>


double minimo(double a, double b, double c, double d)
{
    double mi;

    mi = a;

    if (mi >= b)
    {
        mi = b;
    }
    if (mi >= c)
    {
        mi = c;
    }
    if (mi >= d)
    {
        mi = d;
    }

    return mi;
}

int main()
{
    double a, b, c, d, mi;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);

    mi = minimo(a, b, c, d);

    printf("%.4f", (a + b + c + d - mi)/3);

    return EXIT_SUCCESS;
}
