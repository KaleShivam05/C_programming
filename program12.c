/////////////////////////////////////////////////////////////////
//
//  File name :     program12.c
//  Descreption :   Use to check number is divisible by 5 & 3 
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          21/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
          Check 
            if number is divisible by 5 & 3 than
             Display number is divisible by 5 & 3
            if number is not divisible by 5 & 3 than
             Display number is not divisible by 5 & 3       
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is divisible by 3 & 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 3 & 5\n",iValue);
    }
    else 
    {
        printf("%d is not divisible 3 or 5\n",iValue);
    }

    return 0;
}