#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if (n>99 and n<1000)
    {
        cout<<"Three digit number";
    }
    else
    {
        cout<<"Not a Three digit number";
    }
    return 0;
}
