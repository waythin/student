#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 50;
    int * pAge = &age;  // &age = memory address

    int b = 51;


    printf("%p \n", &age);
    printf("%d \n", &pAge);


    return 0;
}
