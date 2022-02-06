#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber =rand() % maxValue + 1;

    printf("%d\n" , randomNumber);
    
    printf("Guess a number between 0 to %d:" ,maxValue);
    int input;
    scanf("%d" ,&input);

    if(input == randomNumber)
    {
        printf("you win!\n");
    }
    else
    {
        printf("you lose!\n");
    }
     return 0;
}