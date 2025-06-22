/////////////////////////////////////////////////////////////////
//
//  File name :     program11.c
//  Descreption :   Use to check number is divisible by 5 or not
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
            if number is divisible by 5 than
             Display number is divisible by 5
            if number is not divisible by 5 than
             Display number is not divisible by 5        
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else 
    {
        printf("%d is not divisible by 5\n",iValue);
    }

    return 0;
}