#include<iostream>
 using namespace std;

 class PPA
 {
    public:
        int no1;
        int no2;

    PPA()
    {
        cout<<"Inside default Constructor\n";
    }

    ~PPA()
    {
        cout<<"Inside Destructor\n";
    }    
 };

 int main ()
 {
    PPA pobj1;      //2 times Constructor and 2 times Destructor
    PPA pobj2;

    return 0;
 }