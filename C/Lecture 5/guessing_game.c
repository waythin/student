 #include<stdio.h>


int main()
{
    printf("Welcome to guessing game! \n");
    printf("You have only 3 chances to guess the correct number! \n\n");

    int count= 1;
    int guess;
    int answer =5;

    while(guess != answer && count <=3)
    {
        printf("Guess the correct Number : ");
        scanf("%d",&guess);
        count++;
    }

    printf("\n");

    if (guess == answer){
        printf("You win!");
    }
    else {
        printf("You failed!");
    }

    printf("\n");
    return 0;
}
