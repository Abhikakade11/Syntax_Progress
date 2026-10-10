#include<stdio.h>
int main()
{
    int no=11;
    int *const p=&no;
    int i=21;
        
    printf("%d\n",*p);              //11
    printf("%d\n",&no);             //Address of no
    no++;
    printf("%d\n",no);              //12

    *p=21;
    printf("%d\n",no);              //21

   /* p++;
    printf("%d\n",no);
    p=&i;
    printf("%d\n",i);*/


    return 0;
}