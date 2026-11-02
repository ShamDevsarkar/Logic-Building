#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : EvenFactorial
//  Input           : integer
//  Description     : Display the EvenFactor Multiplication 
//  Date            : 02/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;
    if(iNo < 0)
    {
       iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        ifact = ifact * iCnt;

    }
    return ifact;

}



///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factor of number is : %d\n",iRet);

    

    return EXIT_SUCCESS;
}
