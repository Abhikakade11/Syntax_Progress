#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public :
        int i,j;
    virtual void fun()
        {
            cout<<"Inside Base fun"<<"\n";
        }
};

#pragma pack(1)
class Derived : public Base
{
    public :
        int x;
        void fun()
        {
            cout<<"Inside Derived fun"<<"\n";
        }

};

int main()
{
    cout<<sizeof(Base)<<"\n";        //16
    cout<<sizeof(Derived)<<"\n";     //20

    Base *bp=new Derived();          //Up Casting

    bp->fun();                      //Derived Fun

    return 0;
}