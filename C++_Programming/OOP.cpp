#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic()                 //Default Constructor
        {
             no1=0;
             no2=0;
        }
        Arithematic(int i,int j)     //Parameterised comstructor
        {
            no1=i;
            no2=j;
        }
};

int main()
{
   Arithematic aobj1;

   Arithematic aobj2(10,11);

   cout<<aobj1.no1<<"\n";  //0
   cout<<aobj1.no2<<"\n";  //0

   cout<<aobj2.no1<<"\n";  //10
   cout<<aobj2.no2<<"\n";  //11

    return 0;
}
