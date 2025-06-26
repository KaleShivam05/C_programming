/////////////////////////////////////////////////////////////////
//
//  File name :     program17.c
//  Descreption :   Display Even factors of numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          25/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display Even factors of numbers    
    Stop
*/

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}