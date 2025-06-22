/////////////////////////////////////////////////////////////////
//
//  File name :     program13.c
//  Descreption :   Display Summation of all numbers
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          21/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display Summation of all numbers    
    Stop
*/


#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    
    printf("Summation is : %d\n",iRet);

    return 0;
}