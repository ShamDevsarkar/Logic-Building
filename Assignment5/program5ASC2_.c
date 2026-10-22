#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number\n");
    scanf("%d",&iValue);
    bRet = Check(iValue);
    if(bRet = true)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return EXIT_SUCCESS;
}
