#include<stdio.h>
#include<stdlib.h>
void CheckLeapYear(int iyear)
{
    if(iyear <= 0)

    {
        printf("Invalid\n");

    }
   else if(iyear % 400 == 0 )
   {
    printf("Leap Year");
   }
   else if( iyear % 4 == 0  &&  iyear % 100 != 0)
   {
    printf(" leap year\n");
   }
   else
   {
    printf("Not leap year");
   }
    


    

}


int main()
{
    int iYear = 0; 
    printf("Enter year : \n");
    scanf("%d", &iYear);
    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}