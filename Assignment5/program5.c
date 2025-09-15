//write a program which accepts N from the user and print first 5 multiples of N
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1;iCnt<=5; iCnt++)
    {
        iSum = iCnt * iNo;
        printf(" %d ",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}