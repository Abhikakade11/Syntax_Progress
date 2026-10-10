#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j;
        void fun()
        {
            cout<<"Inside Base fun"<<"\n";
        }
};

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
    cout<<sizeof(Base)<<"\n";        //8
    cout<<sizeof(Derived)<<"\n";     //12

    Base *bp=new Derived();          //Up Casting

    bp->fun();                      //Base Fun

    return 0;
}