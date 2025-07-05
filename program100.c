/////////////////////////////////////////////////////////////////
//
//  File name :     program100.c
//  Descreption :   Count small from string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Count small from string
    Stop        
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);
    
    printf("Number of small characters are : %d\n",iRet);

    return 0;
}