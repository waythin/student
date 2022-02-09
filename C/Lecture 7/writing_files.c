#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * fpointer = fopen("Try.txt", "a");  // FILE = almost like a data type | fpointer = stores a memory address of try.txt file
    // "w" | write file ...............  "a"  | append file
    fprintf(fpointer, " \n All wariz certified Welcome fellows!!!!");

    fclose(fpointer);
    return 0;
}
