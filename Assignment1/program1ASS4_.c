#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo >= 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is negative");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}