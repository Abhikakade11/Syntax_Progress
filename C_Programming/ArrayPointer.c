#include<stdio.h>
int main()
{
   int arr[]={10,20,30,40};

    
   printf("%d\n",arr[2]);             //30
   printf("%d\n",*(arr+2));           //30
   printf("%d\n",*(2+arr));           //30   
   printf("%d\n",2[arr]);             //30

   return 0;
}