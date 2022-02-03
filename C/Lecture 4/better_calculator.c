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
    printf("__________Better Calculator__________");
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

     if (c == '+'){
        printf("Addition of %lf %c %lf = %f",a,c,b, addition(a,b));
     }
     else if(c == '-')
     {
         printf("subtraction of %lf %c %lf = %f",a,c,b, subtraction(a,b));
     }
     else if(c == '*')
     {
         printf("multiplication of %lf %c %lf = %f",a,c,b, multiplication(a,b));
     }
     else if(c == '/')
     {
         printf("division of %lf %c %lf = %f",a,c,b, division(a,b));
     }
     else{
        printf("Error...");
     }

    printf("\n\n");
    return 0;
}
