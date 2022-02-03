#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] ={1,2,3};

    printf("Numbers are : %d , %d, %d", a[0],a[1], a[2] );
    printf("\n\n");

    a[1]= 100;
    printf("another num : %d ", a[1]);
     printf("\n");

    return 0;
}
