#include<stdio.h>

struct  Demo
{
    int i;
    float f;
};

int main ()
{
    printf("%d\n",sizeof(struct Demo));    //8
    return 0;
}