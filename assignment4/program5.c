//wrire a program which accepts number from user and return difference between summation of all its factors and non factors
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumNon = 0;
    int iSumF = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSumF = iSumF + iCnt;
        }
        else
        {
            iSumNon = iSumNon + iCnt;
        }
    }
    iDiff = iSumF - iSumNon;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("difference between factor and nonfactor is : %d",iRet);

    return 0;
}