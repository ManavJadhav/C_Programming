
#include "Header.h"               // User defined header file inclusion


// Entry point function
int main()
{
    int iValue1 = 0,iValue2 =0  ;

    printf("Enter the First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}