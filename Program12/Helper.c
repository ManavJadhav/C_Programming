////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     DisplayEvenFactor
//  Input :             Integer
//  Output :            Integers
//  Description :       It used to accept number from user and print EVEN factors of that number
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO
        Find the EVEN Factors of NO
        Display the EVEN Factors
    STOP
*/

#include "Header.h"

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <=0)
    {
       iNo = -iNo ;
    }

    for (iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            if((iCnt % 2)==0)
            {
                printf("%d\t",iCnt);
            }
            
        }
    }
    printf("\n");
  
}