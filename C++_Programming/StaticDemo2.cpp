#include<iostream>
using namespace std;

class Demo
{
    public:
        int no1;
        int no2;
        static int x;

        Demo(int i,int j)     //Parametrised Constructor
        {
            no1=i;
            no2=j;
        }

        void fun()           //Function / Method
        {
            cout<<"inside fun\n";
            cout<<no1<<"\n";
            cout<<no2<<"\n";
            cout<<x<<"\n";
        }

        static void gun()
        {
            cout<<"inside fun\n";
            cout<<x<<"\n";
        }
};

int Demo :: x=11; 

int main()
{
    cout<<Demo::x<<"\n";
    Demo::gun();

    return 0;
}