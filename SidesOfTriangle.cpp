#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    cout<<"Enter all the sides-\n";
    cin>>a;
    cin>>b;
    cin>>c;
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout<<"This is triangle";
    }
    else
    {
        cout<<"This is not Triangle";
    }

    return 0;
}
