#include<stdio.h>

union Demo
{
    int i;
    float f;
};

int main()
{
    union Demo dobj;

    dobj.f=11.0f;
    dobj.i=21;

    printf("%f\n",dobj.f);    //11.0
    printf("%d\n",dobj.i);    //21

    //Union me 1 time par sirf 1 hi variable ki value store hoti hai 
    // Aur sabko milkar 1 hi MEmory allocate hori hai

    return 0;
}