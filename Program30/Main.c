#include "Header.h"

int main()
{
    int iValue1 =0 , iValue2 = 0 ,  iRet = 0;

    printf("Enter the Starting Point: \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point: \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("Addtion of All Numbers is : %d\n",iRet);

    return 0;
}

