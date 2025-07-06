/////////////////////////////////////////////////////////////////
//
//  File name :     program110.c
//  Descreption :   Update Stirng
//  Input :         String
//  Output :        String
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

void struprX(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}