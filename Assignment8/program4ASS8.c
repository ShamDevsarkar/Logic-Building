#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : Table
//  Input           : integer
//  Description     : Table of Number
//  Date            : 31/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    for( iCnt = iNo; iCnt <= iNo*10; iCnt+=iNo)
    {
        printf("%d\n",iCnt);
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

    Table(iValue);

    

    return EXIT_SUCCESS;
}