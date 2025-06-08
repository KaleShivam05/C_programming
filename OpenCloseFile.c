#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[50];

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open file");
        return -1;
    }
    else
    {
        printf("File is succesfully Open with fd :%d\n",fd);
    }

    close(fd);

    return 0;
}