#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int ret = 0;

    ret = unlink("Demo.txt");

    if(ret == -1)
    {
        printf("Unable to delet file");
        return -1;
    }
    
    else
    {
        printf("File gets Successfully deleted \n");
    }

    return 0;
}