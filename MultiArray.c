#include <stdio.h>

void printArray(int arr[], int size)
{
 for (int i = 0; i < size; i++)
 {
    printf("%d ", arr[i]);
 }
     
}
int main()
{
    
    int grades[2][3] = 
    {
        {12, 23, 45},
        {78, 26, 46}
    };
    
    
    for (int i = 0; i < 2; i++)
    {
        printArray(grades[i], 3);

        printf ("\n");
    }
    
    return 0;
}