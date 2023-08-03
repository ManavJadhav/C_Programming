/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             5
//  Output :            5#	4#	3#	2#	1#
//  Description :       It used to accept number from user and display the pattern
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept number as iNo
        Display the Pattern
    STOP
*/

#include "Header.h"

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = {'\0'};

    for(iCnt = iNo ; iCnt >0 ; iCnt--)
    {
        printf("%d#\t",iCnt);
    }
    printf("\n");
}
