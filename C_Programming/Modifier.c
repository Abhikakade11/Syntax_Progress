#include<stdio.h>
int main()
{

    int i=10;
    short int j=10;
    long int k=10;

    printf("%d\n",sizeof(i));        //4
     printf("%d\n",sizeof(j));       //2
      printf("%d\n",sizeof(k));      //4,8

    return 0;
}