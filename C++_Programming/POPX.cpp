#include<iostream>
using namespace std;

 int Addition(int i,int j)
{
    int Result=0;
    Result=i+j;         //Bussiness Logic Outside Class
    return Result;
};

int main()
{
     int no1=0,no2=0,Ans=0;

     cout<<"Enter 1st Number:\n";
     cin>>no1;

     cout<<"Enter 2nd Number:\n";
     cin>>no2;

     Ans=Addition(no1,no2);
     cout<<"Addition is :"<<Ans<<"\n";
     return 0;
}