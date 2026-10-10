#include<iostream>
using namespace std;

#pragma pack(1)
class Base 
{
    public :
        int i,j;
        int Addition(int no1,int no2)                //1000
        {
            return no1+no2;
        }

    virtual int Substractiion(int no1,int no2)=0;     //-----


};
#pragma pack(1)
class Derived :public Base
{
    public :
        int x;

        int Substractiion(int no1,int no2)           //2000
        {
            return no1-no2;
        }
        int Multiplication(int no1,int no2)          //3000
        {
            return no1*no2;
        }

};
int main()
{
    Derived dobj;

    cout<<"size of base class is:"<<sizeof(Base)<<"\n";
    cout<<"size of Derived class is:"<<sizeof(Derived)<<"\n";

    int Ret=0;

    Ret=dobj.Addition(11,10);
    cout<<"Addition is : "<<Ret<<"\n";

    Ret=dobj.Substractiion(11,10);
    cout<<"Substraction is : "<<Ret<<"\n";

    Ret=dobj.Multiplication(11,10);
    cout<<"Multiplication is : "<<Ret<<"\n";

    return 0;
}
