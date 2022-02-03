#include <stdio.h>
#include <stdlib.h>


int main()
{
   int a =1;

   while(a <=10){
    printf("%dth place.\n",a);
    a++;
   }

   printf("\n\n");
   //infinity loop
   /*
   int b=1;
   while(b !=0 )
   {
    printf("%d",b);
    b++;
   }
   int b=1;
   while(b <2 )
   {
    printf("%d",b);
   }*/

   //do while loop
   int c=10;

   do{
    printf("%dth stage.\n",c);
    c++;
   }while(c<=10);

    return 0;
}

