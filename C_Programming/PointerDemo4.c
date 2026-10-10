#include<stdio.h>
int main()
{

    char ch='A';
    int no=11;
    float marks=90.78f;
    double d=90.56789;

    char *cp=&ch;
    int *ip=&no;
    float *fp=&marks;
    double *dp=&d;

    printf("%c\n",*cp);               //A
    printf("%d\n",*ip);               //11
    printf("%f\n",*fp);               //90.78
    printf("%lf\n",*dp);              //90.56789

    return 0;
}