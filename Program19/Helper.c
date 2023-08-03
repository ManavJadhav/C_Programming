//////////////////////////////////////////////////////////////////////////
//
//  Function name :     ChkZero
//  Input :             Integer
//  Output :            String
//  Description :       It used to accept number from user and check whether it contains 0 or not.
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Check if the Digit contains 0
        Divide by 10 to Remove last digit
        Display the Output on console
    STOP
*/

#include "Header.h"

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL flag = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            flag = TRUE;
        }
        iNo = iNo / 10;
    } 
    return flag;
    
}