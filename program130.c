/////////////////////////////////////////////////////////////////
//
//  File name :     program130.c
//  Descreption :   Check wether string is pallindrome or not
//  Input :         String 
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          07/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Check wether string is pallindrome or not
    Stop        
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;
    
    while(start < end)
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }
    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }

    return 0;
}