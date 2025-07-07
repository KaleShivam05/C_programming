/////////////////////////////////////////////////////////////////
//
//  File name :     program126.c
//  Descreption :   Reverse Display string
//  Input :         String 
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          07/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Reverse Display String
    Stop        
*/

#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0, iCnt = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    iCnt = iCount;
    while( iCnt > 0 )
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }
    
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}