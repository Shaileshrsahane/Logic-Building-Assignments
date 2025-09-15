//write a program which accepts number from user and display all its non Factrors
#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {

        }
        else
        {
            printf("%d ",iCnt);
        }
        /*
            OR
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
        */
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}