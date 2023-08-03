//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Divide
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Display first number in second number of times.
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Accept second number as FREQUENCY
        Display first number(NO) in second number(FREQUENCY) of times.
    STOP
*/

#include "Header.h"

void Display(int iNo , int iFrequency)
{
    int i = 0;

    if(iFrequency < 0)
    {
        printf("Enter Positive Frequency");
    }

    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\n",iNo);
    } 
}
