#include<stdio.h>
#pragma pack (1)

struct  Demo
{
    int no;
    float f;
    int *p;
};

int main ()
{
   int x=11;
   struct Demo dobj;

   dobj.no=21;
   dobj.f=99.99f;
   dobj.p=&x;

   printf("%d\n",*(dobj.p));    //11
   printf("%d\n",dobj.no);      //21
    
   return 0;
}

