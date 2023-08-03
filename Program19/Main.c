#include "Header.h"

int main()
{
    int iValue =0 ;
    BOOL bRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);
    if(bRet==TRUE)
    {
        printf("It Contains zero\n");
    }
    else
    {
        printf("It Does NOT Contains zero\n");
    }

    return 0;
}
