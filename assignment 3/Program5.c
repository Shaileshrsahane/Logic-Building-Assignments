// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1  
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u'))
    {
        return TRUE;
    }
    
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c",&cValue);
    
    bRet = CheckVowel(cValue);
    
    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel\n");
    }
    
    return 0;
}