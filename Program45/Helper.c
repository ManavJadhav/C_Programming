/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             Row = 3 & col= 5
//  Output :            A   A   A   A   A	
//                      B   B   B   B   B	
//                      C   C   C   C   C	
//  Description :       It used to accept Rows & Column from user and display the pattern
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept number of Row as  iRow
        Accept number of Column as as iCol
        Display the Pattern
    STOP
*/

#include "Header.h"

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = {'\0'};

    for(i = 1, ch = 'A' ; i <= iRow ; i++, ch++)
    {
        for(j = 1 ; j<= iCol ; j++ )
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }  
}