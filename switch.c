#include <stdio.h>

int main()
{
    int slices = 3;

    switch (slices)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    default:
        printf("nice");
        break;
    }
    return 0;
}