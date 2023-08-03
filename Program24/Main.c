#include "Header.h"

int main()
{
    int iValue =0 , iRet =0 ;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf("Frequency of Odd Digits in the Number is : %d\n",iRet);

    return 0;
}
