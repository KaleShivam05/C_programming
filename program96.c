/////////////////////////////////////////////////////////////////
//
//  File name :     program96.c
//  Descreption :   Check how many charecter in string 
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          05/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Check how many charecter in string
    Stop        
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);
    
    printf("Number of characters are : %d\n",iRet);

    return 0;
}