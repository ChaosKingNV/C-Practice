#include <stdio.h>
#include <stdbool.h>

bool checkIfPrime(int input)
{
    for (int i = input-1; i>=2; i--)
    {
        if (input % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    for (int i = input; i>=2; i--)
    {
        bool prime = checkIfPrime(i);
        if (prime)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}