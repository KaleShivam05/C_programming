/////////////////////////////////////////////////////////////////
//
//  File name :     program108.c
//  Descreption :   small to capital charecter
//  Input :         InDiA
//  Output :        INDIA
//  Author :        Shivam Rajendra Kale
//  Date :          06/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            small to capital charecter
    Stop        
*/


#include<stdio.h>

void strlwrX(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}