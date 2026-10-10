#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40};
    int *p=&(arr[1]);
    int *q=&(arr[3]);

    printf("%d\n",p);               //Address of 1
    printf("%d\n",q);               //Address of 3

    printf("%d\n",p+2);             //40
    printf("%d\n",q-2);             //20
    printf("%d\n",q-p);             //2

    return 0;
}