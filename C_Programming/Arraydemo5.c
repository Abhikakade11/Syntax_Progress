#include<stdio.h>
int main()
{
    int arr[4];

    arr[3]=40;
    arr[1]=20;
    arr[2]=30;
    arr[0]=10;

    printf("%d\n",arr[0]);            //10
    printf("%d\n",arr[3]);            //40
    printf("%d\n",arr[2]);            //30
    printf("%d\n",arr[1]);            //20
    
    
    return 0;
}