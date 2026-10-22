#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}