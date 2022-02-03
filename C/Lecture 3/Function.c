#include <stdio.h>

void welcome()
{
    printf("Good Morning! Welcome All!");
}

void days(char day[])
{
    printf("This is my %s", day);
}

void multiple(char name[], int num)
{
    printf("%s is the first parameter and %d is the 2nd parameter.", name, num);
}

int main()
{
    welcome();
    printf("\n\n");
    days("FIRST");
    printf("\n");
    days("2nd");
     printf("\n");
    days("3rd");
    printf("\n\n");
    multiple("Character", 500);
    printf("\n\n");
    return 0;
}


