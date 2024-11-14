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

    if (a>b && a>c)
    {
        cout<<"A is Greatest";
    }
    else if (b>a && b>c)
    {
        cout<<"B is Greatest";
    }
    else
    {
        cout<<"C is Greatest";
    }


    return 0;
}
