#include<stdio.h>
#include<stdlib.h>

void CheckVoting(int iage)
{
    
    
    if( iage < 0 )
    {
        printf("Invalid\n");
    }
    else if(iage >= 18)
    {
        printf(" Eligible for vote");
    }
    else
    {
        printf("Not Eligible for vote");
    }
}

int main()
{
    int Age = 0;
    printf("Enter your Age\n");
    scanf("%d",&Age);
    CheckVoting(Age);
    return EXIT_SUCCESS;
}