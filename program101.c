/////////////////////////////////////////////////////////////////
//
//  File name :     program101.c
//  Descreption :   Count small , capilat & digit from string 
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Count small , capilat & digit from string
    Stop        
*/

#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountCap = 0, iCountSmall = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else
        {
            iCountCap++;
        }
        str++;
    }
    printf("Number of capital characters are : %d\n",iCountCap);
    printf("Number of small characters are : %d\n",iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmall(Arr);
    
    return 0;
}