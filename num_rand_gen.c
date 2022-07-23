#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=0;
    srand(time(0));
    number = rand()%100+1; //generate random number between 1 to 100
    printf("The random number is %d \n", number);
    for (int guess = 1; guess != number; nguesses++)
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("The guessed number is found at %d attemps \n", nguesses);
        }

    } 
        return 0;
}