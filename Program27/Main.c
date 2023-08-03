#include "Header.h"

int main()
{
    int iValue =0 , iRet= 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference between Summation of Even Digits & Odd Digit in the Number is : %d\n",iRet);

    return 0;
}

