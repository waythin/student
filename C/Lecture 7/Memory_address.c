#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 50;
    char c = 'C';
    int b = 51;
    int d = 51;


    printf("%p \n", &a);
    printf("%p \n", &b);
    printf("%p", &d);

    return 0;
}
