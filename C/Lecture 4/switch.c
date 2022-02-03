#include <stdio.h>
#include <stdlib.h>

double addition(double num1, double num2)
{
    return num1 + num2 ;
}

double subtraction(double num1, double num2)
{
    return num1 - num2 ;
}

double multiplication(double num1, double num2)
{
    return num1 * num2 ;
}


double division(double num1, double num2)
{
    return num1 / num2 ;
}

int main()
{
    printf("__________Better Calculator Using SWITCH__________");
    printf("\n\n");

    double a,b;
    char c;

    printf("Enter the 1st value : ");
    scanf("%lf",&a);
    printf("Enter the operation : ");
    scanf(" %c",&c);
    printf("Enter the 2nd value : ");
    scanf("%lf",&b);
     printf("\n\n");

    switch(c)
    {
    case '+' :
        printf("Addition of %lf %c %lf = %f",a,c,b, addition(a,b));
        break;
    case '-' :
        printf("subtraction of %lf %c %lf = %f",a,c,b, subtraction(a,b));
        break;
    case '*' :
        printf("multiplication of %lf %c %lf = %f",a,c,b, multiplication(a,b));
        break;
    case '/' :
        printf("division of %lf %c %lf = %f",a,c,b, division(a,b));
        break;
    default :
        printf("Enter valid operator!");

    }

    printf("\n\n");
    return 0;
}
