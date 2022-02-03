#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("...Basic Calculator...");
    printf("\n\n");

    double a,b;

    printf("Enter a value : ");
    scanf("%lf", &a);
    printf("Enter another value : ");
    scanf("%lf", &b);
    printf("\n\n");

    printf("The first value is = %f", a);
    printf("\n");
    printf("The second value is = %f", b);
    printf("\n\n");

    double add, sub, mul, div;

    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("Addition = %f", add);
    printf("\n\n");

    printf("Subtraction = %f", sub);
    printf("\n\n");


    printf("Multiplication = %f", mul);
    printf("\n\n");


    printf("Division = %f", div);
    printf("\n\n");




    return 0;
}
