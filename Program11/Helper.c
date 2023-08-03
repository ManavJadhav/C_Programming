////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     DisplayFactor
//  Input :             Integer
//  Output :            Integers
//  Description :       It used to accept number from user and print factors of that number
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO
        Find the Factors of NO
        Display the Factors
    STOP
*/

#include "Header.h"

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <=0)
    {
       iNo = -iNo ;
    }

    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
            
        }
    }
    printf("\n");
  
}