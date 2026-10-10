#include<stdio.h>
int main()
{
    int no=11;
    int *p=&no;


    printf("%d\n",*p);              //11
    printf("%d\n",&no);             //Address of no
    no++;
    printf("%d\n",no);              //12

    *p=21;
    printf("%d\n",no);              //21




    return 0;
}