#include "Header.h"

int main()
{
    int iValue =0 , iRet =0 ;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    printf("Frequency of 2 in the Number is : %d\n",iRet);

    return 0;
}
