#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n", a & b);   //a AND b
    printf("%d\n", a | b);   //a OR 2
    printf("%d\n", a ^ b);  //a Exclusive OR b
    printf("%d\n", ~a);  //Complement a
    printf("%d\n", ~b);  //Complement b
    printf("%d\n", a >>= 2);  //a >> 2
    printf("%d", b <<= 2);  //b << 2

    return EXIT_SUCCESS;
}
