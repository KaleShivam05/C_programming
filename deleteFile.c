#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[50];

    printf("Enter the file name that you want to delet : \n");
    scanf("%s",Fname);

    unlink(Fname);

    return 0;
}