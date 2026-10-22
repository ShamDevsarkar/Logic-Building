#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
   
    if(cValue >= 'A' && cValue <= 'Z' )
    {
        printf("UpperCase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z' )
    {
        printf("Lowercase Alphabet\n");
    }
    



}

int main()
{
    char cValue = '\0';
    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}