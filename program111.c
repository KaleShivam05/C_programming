/////////////////////////////////////////////////////////////////
//
//  File name :     program111.c
//  Descreption :   Update String
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          06/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Toggle the String
    Stop        
*/

#include<stdio.h>

void strtoggleX(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}