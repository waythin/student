#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[20];
    char sen[50];

    printf("Character : ");
    scanf(" %c", &ch);
    printf("\n");
    printf("The character is : %c", ch);
    printf("\n\n");

    printf("String : ");
    scanf("%s", s);
    printf("\n");
    printf("The string is : %s", s);
    printf("\n\n");

    printf("Sentence : ");
    scanf("%[^\n]%*c", sen);
    printf("\n");
    printf("The Sentence : %s", sen);
     printf("\n\n");
    return 0;
}
