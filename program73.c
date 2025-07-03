/////////////////////////////////////////////////////////////////
//
//  File name :     program73.c
//  Descreption :   how to get input charecter in c
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          03/07/2025
// 
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter your division : \n");
    scanf("%c",&ch);

    printf("Your division is : %c\n",ch);

    return 0;
}