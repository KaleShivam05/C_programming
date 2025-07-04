/////////////////////////////////////////////////////////////////
//
//  File name :     program78.c
//  Descreption :   find small charecter from string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          04/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            find small charecter from string
    Stop        
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("%c is small\n",cValue);
    }
    else
    {
        printf("%c is not small\n",cValue);
    }
    
    return 0;
}