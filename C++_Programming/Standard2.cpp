#include<iostream>
using namespace std;

int main()
{
    int std=0;
    cout<<"Enter Your Standard\n";
    cin>>std;

    switch (std)
    {
        case 1:
            cout<<"Your exam time is 9.30 AM\n";
            break;
        
        case 2:
            cout<<"Your exam time is 10.30 AM\n";
            break;

        case 3:
            cout<<"Your exam time is 11.30 AM\n";
            break;

        default :
            cout<<"Invalid Input\n";
    }
    
    return 0;
}