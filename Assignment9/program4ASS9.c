#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : ODDFactorial
//  Input           : integer
//  Description     : Display the OddFactor Multiplication 
//  Date            : 02/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


int ODDFactorial(int iNo)
{
    int iCnt = 0;
    int ifact = 1;
    if(iNo < 0)
    {
       iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            ifact = ifact * iCnt;

        }
        

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

    iRet = ODDFactorial(iValue);

    printf("Even Factor of number is : %d\n",iRet);

    

    return EXIT_SUCCESS;
}
