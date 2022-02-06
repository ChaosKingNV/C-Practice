#include <stdio.h>

int main()
{
    int size = 5;
    int Array [size];
    
    Array[0]= 10;
    Array[1]= 15;
    Array[2]= 14;
    Array[3]= 14;
    Array[4]= 11;
-
    int i = 0;
    while (i < size)
    {
        printf("%d\n", Array[i]);
        
        i++;

    }
    
    return 0;

}