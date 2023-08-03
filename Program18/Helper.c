//////////////////////////////////////////////////////////////////////////
//
//  Function name :     DisplayDigit
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to accept number from user and display its digits in reverse order.
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Divide by 10 to Remove last digit
        Display the Digit in Reverse order
    STOP
*/

#include "Header.h"

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    } 
    
}