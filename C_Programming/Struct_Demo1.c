#include<stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
};

int main()
{
    printf("%d\n",sizeof(struct Demo)); //16

    return 0;
}