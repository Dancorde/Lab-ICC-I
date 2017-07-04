#include <stdio.h>

int main(void)
{
    float n1, n2;
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("%.2f",(2/((1/(n1+1))+(1/(n2+1))))-1);

    return 0;
}
