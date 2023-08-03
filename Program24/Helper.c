//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountOdd
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to accept number from user and count frequency of Odd digits in it .
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Check if the Digit contains Odd digit
        Divide by 10 to Remove last digit
        Return the Frequency of odd digit of iRet
    STOP
*/

#include "Header.h"

int CountOdd(int iNo)
{
    int iDigit = 0 , iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 )!=0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    } 
    return iCnt;
    
}