#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[50];

    printf("Enter the file name that you want to create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File is succesfully created with fd :%d\n",fd);
    }


    return 0;
}