/////////////////////////////////////////////////////////////////
//
//  File name :     program105.c
//  Descreption :   Count charecter from string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Count charecter from string
    Stop        
*/

#include<stdio.h>

int Count(char *str)
{
    int iCount =  0;
    
    while(*str != '\0')
    {
        if(*str == 'a')
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

    iRet = Count(Arr);

    printf("Number of a characters are : %d\n",iRet);
    
    return 0;
}