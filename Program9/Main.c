
#include "Header.h"               // User defined header file inclusion


// Entry point function
int main()
{
    int iValue = 0,iRet =0 ;

    printf("Enter the First Number : \n");
    scanf("%d",&iValue);

    iRet = Check(iValue);
    if(iRet == TRUE)
    {
        printf("It is an Even Number\n");
    }
    else
    {
        printf("It is an Odd Number\n");
    }

    return 0;
}