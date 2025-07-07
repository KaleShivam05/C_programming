/////////////////////////////////////////////////////////////////
//
//  File name :     program127.c
//  Descreption :   Display string
//  Input :         String 
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          07/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Display string
    Stop        
*/

#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0;
    char *start = NULL;

    start = str;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    while (str >= start)
    {
        printf("%c",*str);
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