#include <stdio.h>

int square(int value)
{   int result = value* value;
    return  result;
}

int cube(int value);

int main()
{
    printf("The square value is = %d",  square(3));
    printf("\n\n");
    printf("The cube value is = %d",  cube(3));
    printf("\n\n");
    return 0;
}

int cube(int value)
{
    return value*value*value;
}

