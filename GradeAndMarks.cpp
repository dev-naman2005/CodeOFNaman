#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks;
    cout<<"Enter your percentage: ";
    cin>>marks;

    if (marks<=100 and marks>80)
    {
        cout<<"Very Good";
    }
    else if (marks<=80 and marks>60)
    {
        cout<<"Good";
    }
    else if (marks<=60 and marks>=40)
    {
        cout<<"Average";
    }
    else if (marks<40)
    {
        cout<<"Fail !!!";
    }
    else
    {
        cout<<"Error !!!";
    }
    
    
    
    


    return 0;
}
