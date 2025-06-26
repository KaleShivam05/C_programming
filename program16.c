/////////////////////////////////////////////////////////////////
//
//  File name :     program16.c
//  Descreption :   Display factors & non factors of numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          25/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display factors & non factors of numbers    
    Stop
*/

#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factor is %d\n",iCnt);
        }
        else
        {
            printf("Non Factor is %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}