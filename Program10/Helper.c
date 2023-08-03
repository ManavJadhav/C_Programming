//////////////////////////////////////////////////////////////////////////
//
//  Function name :     PrintEven
//  Input :             Integer
//  Output :            Integers
//  Description :       It used to accept one number from user and print that number of even numbers on screen.
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO
        If No is lesser or equal to 0 then exit
        Display that number of even numbers on screen.
    STOP
*/

#include "Header.h"

void PrintEven(int iNo)
{
    int i = 0;
    if(iNo <=0)
    {
       return ;
    }

    for (i=1;i<=iNo;i++)
    {
        printf("%d\t",i*2);
    }
    printf("\n");

  
}