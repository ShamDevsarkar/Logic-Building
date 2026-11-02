#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : OddDisplay
//  Input           : integer
//  Description     : Display odd Digit 
//  Date            : 30/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
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

    OddDisplay(iValue);

    

    return EXIT_SUCCESS;
}