#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool isPizzaHealthy;
    int temp;
	printf("Is pizza healthy?");
    scanf("%d" , &temp);
    isPizzaHealthy = temp;
    
	if (isPizzaHealthy)
	{
	printf("Welcome to my pizza APP\n");
	}
}