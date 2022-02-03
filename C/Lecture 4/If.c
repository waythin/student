#include <stdio.h>


int findmax2(int a, int b)
{
    int result;
    if(a>b)
    {
        result = a;
    }
    else{
        result =b;
    }

    return result;
}

int findmax3(int a, int b, int c)
{
    int result;
    if(a>b && a>c)
    {
        result = a;
    }
    else if(b>a && c>a){
        result =b;
    }
    else{
        result =c;
    }

    return result;
}

int main()
{

    printf("The max value between 2 numbers is %d",  findmax2(50,100));
    printf("\n\n");

    printf("The max value between 3 numbers is %d",  findmax3(50,100, 500));
    printf("\n\n");
    return 0;
}

