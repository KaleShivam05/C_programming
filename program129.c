/////////////////////////////////////////////////////////////////
//
//  File name :     program129.c
//  Descreption :   Revers the String
//  Input :         String 
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          07/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Revese the String
    Stop        
*/

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("String after reversal : %s\n",Arr);

    return 0;
}

// Time Complexity O(N+N/2)