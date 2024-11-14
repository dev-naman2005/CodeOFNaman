#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;

if (a>b)
{
    if (a>c)
    {
        cout<<"A is greatest";
    }
    else
    {
        cout<<"C is greatest";
    }
}
else
{
    if (b>c)
    {
        cout<<"B is greatest";
    }
    else
    {
        cout<<"C is greatest";
    }
    
}
    return 0;
}
