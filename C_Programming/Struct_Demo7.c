#include<stdio.h>
#pragma pack (1)

struct  Demo
{
    int no;
    int arr[3];
};
int main ()
{  
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));      //16

    dobj.no=10;
    dobj.arr[0]=11;
    dobj.arr[1]=21;
    dobj.arr[2]=51;

    printf("%d\n",dobj.no);           //10
    printf("%d\n",dobj.arr[0]);       //11
    printf("%d\n",dobj.arr[1]);       //21
    printf("%d\n",dobj.arr[2]);       //51

    return 0;
}