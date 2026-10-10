#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    float f;
    double d;
};

int main()
{
    struct Demo dobj;
    dobj.i=11;
    dobj.f=3.14f;
    dobj.d=9.6789;

    printf("%d\n",dobj.i);        //11
    printf("%f\n",dobj.f);        //3.14
    printf("%lf\n",dobj.d);       //9.6789

    return 0;
}