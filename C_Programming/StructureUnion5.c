#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float marks;

    }hobj;

};

int main()
{

    struct Demo dobj;

    printf("%d\n",sizeof(dobj));   //16

    dobj.i=11;
    dobj.f=3.14f;


    dobj.hobj.no=21;
    dobj.hobj.marks=90.78;

    printf("%d\n",dobj.i);             //11
    printf("%d\n",dobj.hobj.no);       //21



    return 0;
}