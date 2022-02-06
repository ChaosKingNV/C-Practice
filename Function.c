#include <stdio.h>

int factorial(int number)
{
    int f = 1;
    
    int i = number;
    while (i>1)
    {
        f = i * f; // factorial *= i;

        i--;

    }
    return f;
}

void outputFactorial(int input)
{
    printf("Factorial of %d is %d. \n", input, factorial(input));
    
    return;
}
int main()
{
    outputFactorial(5);
    return 0;
}