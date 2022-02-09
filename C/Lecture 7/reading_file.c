#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * fpointer = fopen("Try.txt", "r");
    char line[500];

    fgets(line, 500, fpointer);

    fgets(line, 500, fpointer);
    printf("%s",line);
    fclose(fpointer);
    return 0;
}
