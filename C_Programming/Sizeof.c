#include<stdio.h>
int main()
{
    char ch='A';
    int i=10;
    float f=11.11f;
    double d=21.215111;

    printf("%d\n",sizeof(ch));        //1
    printf("%d\n",sizeof(i));         //4
    printf("%d\n",sizeof(f));         //4
    printf("%d\n",sizeof(d));         //8

    return 0;
}