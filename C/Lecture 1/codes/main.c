#include <stdio.h>
#include <stdlib.h>


int main()
{
    //1,2,3

    int age = 20;
    char p = 'x';
    float weight =10.8;
    double cgpa = 3.95;
    char name[] = "asif";


    //4
    printf("Printf function starts from here..... \n\n");
    printf("My name is %s \n",name);
    printf("My cgpa is %f \n",cgpa);
    printf("My weight is %f \n",weight);
    printf("He is %d years old.\n\n",age);
    printf("My fav character is %c \n\n",p);


    age = 30;
    char alt[] = "Emon";


    printf("People call him as %s \n",alt);
    printf("He is %d \n\n",age);


    printf("my fav %s is %d and the digit is %f \n", "number", 5, 5/2.5);

    printf("\n\n");



    // 5.,,,,,,,,,,,,,,,,,,,,,,,,,,

    printf("working with numbers.....\n\n");
    float a =2.00,b=3.0;

    printf("this is an example of pow :: %f", pow(a,b));
    printf("\n\n");
    printf("this is an example of sqrt :: %f", sqrt(36));
    printf("\n\n");
    printf("this is an example of ceil :: %f", ceil(36.152));
    printf("\n\n");
    printf("this is an example of floor :: %f", floor(36.152));
    printf("\n\n");



    // 6
    printf("getting user input,,,,,,,,,,,,,,,,,,,,,,,,,,\n\n");



    char bio[100];
    printf("Enter your bio : ");
    fgets(bio, 100 , stdin);
    printf("Bio : %s",bio);
    printf("\n\n");


    char pass[100];
    printf("Enter your name : ");
    scanf("%s", &pass);
    printf("The name is : %s", pass);
    printf("\n\n");

    char fullnameF[50], fullnameL[50];
    printf("Enter full name :");
    scanf("%s%s",&fullnameF, &fullnameL);
    printf("The full name is : %s %s", fullnameF, fullnameL);
      printf("\n\n");

    int age2 ;
    printf("Enter your age : ");
    scanf("%d", &age2);
    printf("The random age is %d.",age2);
    printf("\n\n");


    float height;
    printf("Enter the height : ");
    scanf("%f",&height);
    printf("The height is = %f", height);
    printf("\n\n");

    double amount;
    printf("Enter the amount : ");
    scanf("%lf", &amount);
    printf("The amount is : %f", amount);
    printf("\n\n");









    return 0;
}
