#include "Header.h"

int main()
{
    int iValue =0 , iRet =0 ;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("Frequency of  Digits between 3 & 7 in the Number is : %d\n",iRet);

    return 0;
}
