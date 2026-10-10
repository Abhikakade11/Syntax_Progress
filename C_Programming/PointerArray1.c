#include<stdio.h>
int main()
{

    int arr []={11,21,51,101,111};

    printf("%d\n",arr[2]);          //51
    printf("%d\n",*(arr+2));        //51
    printf("%d\n",*(2+arr));        //51
    printf("%d\n",2[arr]);          //51

    return 0;
}