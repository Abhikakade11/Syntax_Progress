#include<stdio.h>
int main()
{

    char ch='A';
    int no=11;
    float marks=90.78f;
    double d=90.56789;

    printf("%d\n",sizeof(ch));            //1
    printf("%d\n",sizeof(no));            //4
    printf("%d\n",sizeof(marks));         //4
    printf("%d\n",sizeof(d));             //8

    return 0;

}