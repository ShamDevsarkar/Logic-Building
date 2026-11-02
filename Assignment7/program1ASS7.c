#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Input           : integer
//  Description     : Pattern Display 
//  Date            : 30/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////


void Pattern( int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ *\t",iCnt);
    }
    printf("\n");
   

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

    Pattern(iValue);

    return EXIT_SUCCESS;
}