/////////////////////////////////////////////////////////////////
//
//  File name :     program38.c
//  Descreption :   Display number
//  Author :        Shivam Rajendra Kale
//  Date :          29/06/2025
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0, j = 0;

    for(i = 1; i<= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{

    Display();

    return 0;
}