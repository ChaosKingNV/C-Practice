#include <stdio.h> 
#include <math.h>
int main() 
{
    double a; 
    double b;
    printf("This app will calculate the hipotinuse of a right triangle.\n"); 
    printf("Enter the first value: ");
    scanf("%lf", &a); 
    printf("Now Enter the second value: "); 
    scanf("%lf", &b);
    double c = sqrt((a * a) + (b * b));
    printf("The hypoteneose is %f\n", c); 
    return 0;
}