/////////////////////////////////////////////////////////////////
//
//  File name :     program25.c
//  Descreption :   Display Summation of  Digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          26/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display Summation of  Digits 
    Stop
*/

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit; 
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);

    return 0;
}