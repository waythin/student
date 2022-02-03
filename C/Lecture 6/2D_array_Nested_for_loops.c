

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[3][2]= {
                {5,10},
                {6,8},
                {54,58},

                        };

    int i,j;
    for(i= 0; i<3; i++)
    {
        for(j=0; j<2;j++)
        {
            printf("%d,", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

