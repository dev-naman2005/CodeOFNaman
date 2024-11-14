#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    int y;
    cout<<"Enter coordinate X: ";
    cin>>x;
    cout<<"Enter coordinate Y: ";
    cin>>y;
    if (x>0 and y>0)
    {
        cout<<"1st Quadrent";
    }
    else if (x<0 and y>0)
    {
        cout<<"2nd Quadrent";
    }
    else if (x>0 and y<0)
    {
        cout<<"3rd Quadrent";
    }
    else
    {
        cout<<"4th Quadrent";
    }


    return 0;
}
