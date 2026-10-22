#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Check(int iNo)
{
    if((iNo % 5) == 0)
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
    printf("Enter the number\n");
    scanf("%d",&iValue);
   bRet =  Check(iValue);
   if(bRet == true)
   {
    printf("it is divisible by 5\n");
   }
   else
   {
    printf("it is not divisible by 5\n");
   }

    return EXIT_SUCCESS;
}