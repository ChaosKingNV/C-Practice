#include <stdio.h>

int main()
{
    for (int i = 0; i<=10; i++)

    {
	    //printf("%d\n",i);
        for (int k = i; k>=0; k--)
        {
            printf("%d " , k);
        }
        printf("\n");
    }   
    return 0;
}