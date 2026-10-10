#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    printf("%d\n",arr[3]);          //40
    printf("%d\n",arr[4]);          //50
    printf("%d\n",arr[2]);          //30
    printf("%d\n",arr[1]);          //20
    printf("%d\n",arr[0]);          //10
    
    return 0;
}