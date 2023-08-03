#include "Header.h"

int main()
{
    int iValue =0 , iRet= 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between Summation of Factor & Non Factors is : %d\n",iRet);

    return 0;
}

