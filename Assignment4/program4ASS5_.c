#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iNo)
{
    if(iNo % 5 == 0 && iNo % 3 == 0)
    {
        printf("Divisible by both");


    }
    else if(iNo % 5 == 0 )
    {
        printf("Divisible by 5 only\n");
    }
    else if(iNo % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }

    
    
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    CheckNumber(iValue);

    return EXIT_SUCCESS;
}