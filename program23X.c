/////////////////////////////////////////////////////////////////
//
//  File name :     program23X.c
//  Descreption :   Display Count of Digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          26/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display Count of Digits 
    Stop
*/

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}