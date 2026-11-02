#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Input           : integer
//  Description     : Display Digit 
//  Date            : 30/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        
        printf("%d\t",iCnt);
        
        
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

    Display(iValue);

    

    return EXIT_SUCCESS;
}