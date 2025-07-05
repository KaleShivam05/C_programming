/////////////////////////////////////////////////////////////////
//
//  File name :     program97.c
//  Descreption :   Count number of charecter from string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Count number of charecter from string
    Stop        
*/

#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        iCount++;
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

    iRet = strlenX(Arr);
    
    printf("Number of characters are : %d\n",iRet);

    return 0;
}