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
        Arithematic(int i,int j)     //Parameterrised Constructor
        {
            no1=i;
            no2=j;
        }

        int Addition()
        {
            int ans=0;
            ans=no1+no2;
            return ans;
        }
};

int main()
{

    Arithematic aobj1(10,11);

    int result=0;

    result=aobj1.Addition();
    cout<<"Addition is:"<<result<<"\n";

    return 0;
}
