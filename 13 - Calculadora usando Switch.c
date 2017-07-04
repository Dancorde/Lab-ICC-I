#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a, b;
    char op;

    scanf("%f",&a);
    scanf("%c",&op);
    scanf("%c",&op);
    scanf("%f",&b);

    switch (op)
    {
        case '+':
             printf("%.2f",a+b);
             break;
        case '-':
             printf("%.2f",a-b);
             break;
        case '*':
             printf("%.2f",a*b);
             break;
        case '/':
             printf("%.2f",a/b);
             break;
    }

    return EXIT_SUCCESS;
}
