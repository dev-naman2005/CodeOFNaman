#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int l;
    int b;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;
    int Area = l*b;
    int Peri_ = 2*(l+b);
    if (Area>Peri_)
    {
        cout<<"Big";
    }
    else
    {
        cout<<"Shorter";
    }
    

    return 0;
}
