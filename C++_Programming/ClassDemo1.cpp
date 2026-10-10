#include<iostream>
 using namespace std;

 class PPA
 {
    public:
        int no1;
        int no2;
    
        void Dispaly()
        {
            cout<<"Inside Display\n";
        }
 };

 int main ()
 {
    PPA pobj;
    cout<<sizeof(pobj)<<"\n";        //8

    return 0;
 }