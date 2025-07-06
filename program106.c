/////////////////////////////////////////////////////////////////
//
//  File name :     program106.c
//  Descreption :   small to capital charecter
//  Input :         India
//  Output :        IndiA
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
        if(*str == 'a')
        {
            *str = 'A';
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