#include <stdio.h>

int main()
{
    int number =23232;
    for (int i = 0; i>=0; i++)
    {
       printf("%d " ,i);

        if (i == number)
        {
            printf("We found it\n");
            break;
        }
        
    }
    return 0;
}