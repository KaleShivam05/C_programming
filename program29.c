/////////////////////////////////////////////////////////////////
//
//  File name :     program29.c
//  Descreption :   Display number
//  Input :          4
//  Output :         4   3   2   1
//  Author :        Shivam Rajendra Kale
//  Date :          27/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept the frequency
        Iterate from 1 to that frequency
            Display 1 to decrement order on screen
        continue
    Stop
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Inifinity