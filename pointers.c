#include <stdio.h>

int main()
{
    int x = 20;
    int *p = &x; 
    int i = &x;
    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", i);
    return 0;
}