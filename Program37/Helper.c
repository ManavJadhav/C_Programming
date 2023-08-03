/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             8
//  Output :            2	4	6	8	10	12	14	16
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

    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
    printf("\n");
}