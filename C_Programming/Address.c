#include<stdio.h>
int main()
{
    int no=20;
    printf("%d\n",no);               //20
    printf("%d\n",&no);              //Address of NO
    printf("%d\n",sizeof(no));       //4

    return 0;
}
