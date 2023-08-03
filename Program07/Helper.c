//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Display
//  Input :             Integer
//  Output :            String
//  Description :       It used to Display Hello if the number is graeter than 10 & Demo if it is less than 10
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO
        Check if it is less than or greater than 10
        Display String According to the Condition
    STOP
*/

#include "Header.h"

void Display(int iNo)
{
    if( iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}