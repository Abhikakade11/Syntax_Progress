#include<iostream>
using namespace std;
#pragma pack(1)

class Demo
{
    int i;               //c++ me agar kuch access specifier na likhe toh voh by default private hai use acces nhi kiya ja sakta direct
    char ch;
    float f;
};

int main()
{
    Demo dobj;

    dobj.i=11;
    dobj.ch='A';
    dobj.f=3.14f;

    return 0;
}