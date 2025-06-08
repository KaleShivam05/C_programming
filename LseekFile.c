#include<sdtio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[50];

    printf("Enter file name :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    
    return 0;
}