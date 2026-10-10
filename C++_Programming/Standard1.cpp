#include<iostream>
using namespace std;

int main()
{
    int std=0;
    cout<<"Enter Your Standard :";   //insertion operator << output ke liye
    cin>>std;                       //extraction operator >> input lene ke liye 

    if (std==1)
    {
        cout<<"Your exam time is 9.30 AM\n";
    }

    else if(std==2)
    {
        cout<<"Your exam time is 10.30 AM\n";
    }

    else if(std==3)
    {
        cout<<"Your exam time is 11.30 AM\n";
    }

    else 
    {
        cout<<"Invalid Input\n";
    }
    return 0;
}