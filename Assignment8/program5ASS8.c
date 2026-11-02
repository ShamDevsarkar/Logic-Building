#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : TableRev
//  Input           : integer
//  Description     : Table of Number Reverse
//  Date            : 31/10/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    for( iCnt = iNo*10; iCnt >= iNo;  iCnt-=iNo)
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

    TablRev(iValue);

    

    return EXIT_SUCCESS;
}