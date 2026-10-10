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
    };
};

int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));      //4/8 Depends on OS

    return 0;
}