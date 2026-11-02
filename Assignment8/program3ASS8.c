#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Factorial
//  Input           : integer
//  Description     : Display Factorial 
//  Date            : 31/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void Factorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
        printf("%d\n",iSum);
    }


    
        
}
    




///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////


int main()
{
    int iValue;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Factorial(iValue);

    

    return EXIT_SUCCESS;
}