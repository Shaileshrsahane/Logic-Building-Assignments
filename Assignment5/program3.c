// write a program which accepts number from the user and prints its number line
// eg.  -3 -2 -1 0 1 2 3
#include<stdio.h>

void Display(int iNo)
{
    int start = -(iNo);
    int iCnt = 0;
    for(iCnt = start; iCnt <=iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}