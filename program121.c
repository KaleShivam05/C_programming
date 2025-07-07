/////////////////////////////////////////////////////////////////
//
//  File name :     program121.c
//  Descreption :   Count charecter in String
//  Input :         String , Charecter
//  Output :        bool
//  Author :        Shivam Rajendra Kale
//  Date :          07/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Find Charecter from string
    Stop        
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str  == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is not present in %s\n",cValue,Arr);
    }

    return 0;
}