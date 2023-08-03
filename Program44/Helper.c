/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             Row = 4 & col= 4
//  Output :            A   B   C   D	
//                      a   b   c   d	
//                      A   B   C   D
//                      a   b   c   d
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

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1, ch = 'A' ; j<= iCol ; j++ , ch++)
        {
            if((i % 2 )==0)
            {
                printf("%c\t",ch+32);
            }
            else
            {
                printf("%c\t",ch);
            }
            
        }
        printf("\n");
    }  
}