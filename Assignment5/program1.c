// write a program which accepts number from the user and print that number of $ and * on screen
#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf(" & ");
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}