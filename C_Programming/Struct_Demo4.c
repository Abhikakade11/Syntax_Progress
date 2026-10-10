#include<stdio.h>
#pragma pack (1)

struct  Demo
{
    int i;
    char ch;
    float f;
};
int main ()
{
    struct Demo dobj1;
    struct Demo dobj2;

    //Pointer statement
    struct Demo *dp=NULL;
    dp = &dobj2;

    // direct Accesing operater
    dobj1.i=11;       
    dobj1.ch='A';
    dobj1.f=90.99f;

    // indirect Accesing operater
    dp->i=21;
    dp->ch='B';
    dp->f=91.99f;
    printf("%d\n",dobj1.i);    //11
    printf("%d\n",dp->i);      //21

    return 0;
}