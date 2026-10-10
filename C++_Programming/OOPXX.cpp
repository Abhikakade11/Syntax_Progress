#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic()      //Default Constructor
        {
             this->no1=0;
             this->no2=0;
        }
        Arithematic(int i,int j)     //Parametrised Constructor
        {
           this->no1=i;
           this->no2=j;
        }

        //int Adition (Arithmetic *this)
        int Addition()
        {
            int ans=0;
            ans=this->no1+this->no2;
            return ans;

        }
        
        //int Subtraction (Arithmetic *this)
        int Subtraction()
        {
            int ans=0;
            ans=this->no1 - this->no2;
            return ans;

        }

};

int main()
{

    Arithematic aobj1(21,10);

    int result=0;

    //result = Addition (&aobj1);
    result=aobj1.Addition();
    cout<<"Addition is:"<<result<<"\n";

    //result = Subtraction (&aobj1);
    result=aobj1.Subtraction();
    cout<<"Subtraction is:"<<result<<"\n";

    return 0;
}
