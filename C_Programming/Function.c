#include<stdio.h>

    int Addition(int a,int b)
    {
        int result=0;
        result=a+b;
        return result;
    }
 int main()
 {
    int no1=0,no2=0,Ans=0;
    printf("Enter 1st Number:\n");
    scanf("%d",&no1);
    printf("Enter 2nd Number:\n");
    scanf("%d",&no2);
    Ans=Addition(no1,no2);
    printf("Addition is :%d\n",Ans);
    printf("Thank you...!");
    return 0;
 }