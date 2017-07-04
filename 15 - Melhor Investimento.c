#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double calc_poup(double invest, int mes)
{
    double total;

    total = pow((1 + 0.0059), mes) * invest;

    return total;
}

double calc_lci(double invest, int mes)
{
    double total;

    if (mes < 6)
    {
        total = pow((1 + 0.0), mes) * invest;
    }
    else
    {
        total = pow((1 + 0.0086), mes) * invest;
    }

    return total;
}

double calc_cdb(double invest, int mes)
{
    double total, rend;
    float imposto;

    rend = pow((1 + 0.01032), mes) * invest;

    if (mes >= 1 && mes <= 6)
    {
        imposto = 0.225;
    }
    else if (mes >=7 && mes <= 12)
    {
        imposto = 0.2;
    }
    else if (mes >= 13 && mes <= 24)
    {
        imposto = 0.175;
    }
    else
    {
        imposto = 0.15;
    }

    total = rend - (imposto * (rend - invest));

    return total;
}

int main()
{
    double invest, poup, lci, cdb;
    int mes;

    scanf("%lf",&invest);
    scanf("%d",&mes);

    poup = calc_poup(invest, mes);
    lci = calc_lci(invest, mes);
    cdb = calc_cdb(invest, mes);

    printf("%.2lf\n", poup);
    printf("%.2lf\n", lci);
    printf("%.2lf\n", cdb);

    if (poup > lci && poup > cdb)
    {
        printf("P");
    }
    if (lci > poup && lci > cdb)
        printf("L");
    if (cdb > poup && cdb > lci)
        printf("C");

    return EXIT_SUCCESS;
}
