#include<stdio.h>
int main()
{
    const int no=11;
    const int *const p=&no;
    int i=21;
        


    printf("%d\n",*p);              //11
    printf("%d\n",&no);             //Address of no
  /* 
    no++;
    printf("%d\n",no);             

    *p=21;
    printf("%d\n",no);              */

   /* 
    p++;
    printf("%d\n",no);
    
    p=&i;
    printf("%d\n",i);               */


    return 0;
}