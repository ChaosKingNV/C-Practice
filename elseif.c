//doctor's office
// 1. add a patient
// 2. view a patient
// 3. search a patient
// 4. exit
#include <stdio.h>

int main()
{
    
    printf("1. add a patient\n");
    printf("2. view a patient\n");
    printf("3. search a patient\n");
    printf("4. exit\n");
    
    int input;
    scanf("%d" , &input);

    if(input == 1)
    {
        printf("1. add a patient\n");
    }
    else if(input == 2)
    {
        printf("2. view a patient\n");
    }
    else if(input == 3)
    {
      printf("3. search a patient\n");  
    }
    else if(input == 4)
    {
        printf("exiting\n");
        
        printf("Do you wanna save? Y or N \n");
        
        char q;
        getchar();
        scanf("%c" , &q);

        if (q == 'Y' || q == 'y')
        {
            printf("Saving info...\n");
        }
        else if (q == 'N' || q == 'n')
        {
            printf("exiting\n");
        }
        else
        {
            printf("wrong input\n");
        }
    }
    else
    {
        printf("wrong input\n");
    }
    return 0;
}