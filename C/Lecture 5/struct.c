#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int age;
    double cgpa;
};


int main()
{
    struct Student student1;  //  student1 is an instance or container .
    student1.age = 20;
    student1.cgpa = 3.95;
    strcpy(student1.name, "raze");


    struct Student student2;  //  student1 is an instance or container .
    student2.age = 22;
    student2.cgpa = 3.85;
    strcpy(student2.name, "jett");

    printf("Name : %s", student1.name);
    printf("\n");
    printf("CGPA : %f", student1.cgpa);
    printf("\n");
    printf("Age : %d", student1.age);
    printf("\n\n");

    printf("Name : %s", student2.name);
    printf("\n");
    printf("CGPA : %f", student2.cgpa);
    printf("\n");
    printf("Age : %d", student2.age);
    printf("\n\n");

    return 0;
}
