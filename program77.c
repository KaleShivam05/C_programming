/////////////////////////////////////////////////////////////////
//
//  File name :     program77.c
//  Descreption :   find capital charecter form string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          04/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            find capital charecter form string
    Stop        
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital\n",cValue);
    }
    else
    {
        printf("%c is not capital\n",cValue);
    }
    
    return 0;
}