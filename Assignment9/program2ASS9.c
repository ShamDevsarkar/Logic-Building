#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DollerToINR
//  Input           : integer
//  Description     : Convert US doller into indian currancy 
//  Date            : 02/11/2026
//  Author          : Sham Vilas Devsarkar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int DollerToINR(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns = iNo * 70;


    }
    return iAns;

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

    iRet = DollerToINR(iValue);
    printf("The Indian Currancy rupees is : %d\n",iRet);

    

    return EXIT_SUCCESS;
}