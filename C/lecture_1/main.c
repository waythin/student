#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[] = "asif";
    int age = 20;
    double cgpa = 3.95;



    printf("My name is %s \n",name);
    printf("My cgpa is %f \n",cgpa);
    printf("He is %d \n\n",age);


    age = 30;
    char alt[] = "Emon";


    printf("People call him as %s \n",alt);
    printf("He is %d \n\n",age);


    printf("-------------------------------------------------------- \n\n");


    printf("my fav %s is %d and the digit is %f \n", "number", 5, 5/2.5);

    printf("\n\n");

    // working with numbers,,,,,,,,,,,,,,,,,,,,,,,,,,
    float a =2.00,b=3.0;

    printf("this is an example of pow :: %f", pow(a,b));
    printf("\n\n");
    printf("this is an example of sqrt :: %f", sqrt(36));
    printf("\n\n");
    printf("this is an example of ceil :: %f", ceil(36.152));
    printf("\n\n");
    printf("this is an example of floor :: %f", floor(36.152));
    printf("\n\n");


     printf("-------------------------------------------------------- \n\n");
    // getting user input,,,,,,,,,,,,,,,,,,,,,,,,,,

    char pass[100];

    printf("Enter your pass : ");
    scanf("%s", &pass);
    printf("The pass is : %s", pass);
    printf("\n\n");

    int weight;
    printf("Enter the weight : ");
    scanf("%d", &weight);
    prnitf("The weight is : %d",weight);


    char username[50];

    printf("Enter your school name : ");
    fgets(username,50,stdin);
    printf("The school name is : %s fucked",username);



    return 0;
}
