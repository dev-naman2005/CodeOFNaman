#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter your number: ";
    int a;
    cin>>a;
    
    if (a%2==0)
    {
        cout<<"The given number is Even"<<endl;
    }
    else
    {
        cout<<"The given number is Odd"<<endl;
    }

    return 0;
}
