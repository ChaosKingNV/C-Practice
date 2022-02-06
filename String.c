#include <stdio.h>

int main()
{
    
    printf("Your favourite food?\n");

    char favFood[55];
    scanf("%50s" , favFood);
    
    int charCount = 0;
    while (favFood[charCount] != '\0' )
    {
        charCount++;
    }
    printf("Character count = %d" , charCount);
    return 0;
}