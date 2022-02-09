

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[4][3]= {
                {5,10},
                {6,8},
                {54,58},

                        };

    int i,j;
    for(i= 0; i<4; i++)
    {
        for(j=0; j<3;j++)
        {
            printf("%d,", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

