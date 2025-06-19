///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Used to calculate percentage
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          19/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept total & obtained number from user
            And calculate the Percentage
    Stop
*/

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your total marks : \n");
    scanf("%d",&Total);

    printf("Enter your obtained marks : \n");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);
    
    return 0;
}