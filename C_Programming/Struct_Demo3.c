#include<stdio.h>
#pragma pack (1)

struct  Demo
{
    int i;
    float f;
    char ch;
    
};

int main ()
{
    printf("%d\n",sizeof(struct Demo));    //9
    return 0;
}