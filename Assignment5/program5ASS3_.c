#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' ||
       CValue == 'i' || CValue == 'o' ||
       CValue == 'u' || CValue == 'A' ||
       CValue == 'A' || CValue == 'E' ||
       CValue == 'I' || CValue == 'O' ||
       CValue == 'U')
       {
        return true;
    }
    else
    {
        return false;
    }

                                   
    
    
    
}


int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter character\n");
    scanf("%c",&cValue);
     bRet = CheckVowel(cValue);
     if(bRet == true)
     {
        printf("It is Vowel");
     }
     else
     {
        printf("It is not Vowel");
     }

    
    return EXIT_SUCCESS;
}