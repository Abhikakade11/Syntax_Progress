#include<stdio.h>
#pragma pack (1)

struct  Demo
{

    int i = 11;           //error
    char ch = 'A';        //error
    float f = 90.99f;      //error

    //Ham log structure ke andar value ko direct initialize nhi kar sakte 
};

int main ()
{
    struct Demo dobj1;
    struct Demo dobj2;

    // Pointer statement
    struct Demo *dp=NULL;
    dp = &dobj2;

    // Direct Accesing operater
    dobj1.i=11;
    dobj1.ch='A';
    dobj1.f=90.99f;

    // Indirect Accesing operater
    dp->i=21;
    dp->ch='B';
    dp->f=91.99f;
    printf("%d\n",dobj1.i);   //11
    printf("%d\n",dp->i);     //21

    return 0;
}