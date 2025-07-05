/////////////////////////////////////////////////////////////////
//
//  File name :     program104.c
//  Descreption :   Count  white spaces form string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Count  white spaces form string
    Stop        
*/

#include<stdio.h>

int CountSpace(char *str)
{
    int iCount =  0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Number of white spaces are : %d\n",iRet);
    
    return 0;
}