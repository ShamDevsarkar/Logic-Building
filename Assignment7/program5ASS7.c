#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : MultipleDisplay
//  Input           : integer
//  Description     : Display Multiple Digit 
//  Date            : 30/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo+1; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
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

    MultipleDisplay(iValue);

    

    return EXIT_SUCCESS;
}