///////////////////////////////////////////////////////
//
//  File name :     program2XXX.c
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

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPercentageValue;
}

int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter your total marks : \n");
    scanf("%d",&iTotal);

    printf("Enter your obtained marks : \n");
    scanf("%d",&iObtained);

    fPercentage = CalculatePercentage(iTotal,iObtained);

    printf("Percentage is : %.2f%%\n",fPercentage);
    
    return 0;
}
