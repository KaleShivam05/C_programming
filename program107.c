/////////////////////////////////////////////////////////////////
//
//  File name :     program107.c
//  Descreption :   small to capital charecter
//  Input :         IndiA
//  Output :        I$d$A
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

void Change(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}