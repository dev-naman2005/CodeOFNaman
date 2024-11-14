#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    char op;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    cout<<"Enter Operator: ";
    cin>>op;

    switch (op)
{ 
    case '+':
        cout<<"Sum: "<<n1+n2;
        break;
    case '-':
        cout<<"Sub: "<<n1-n2;
        break;
    case '*':
        cout<<"Multiplication: "<<n1*n2;
        break;
    case '/':
        cout<<"Division: "<<n1/n2<<" | Remainder: "<<n1%n2;
        break;
    default:
        cout<<"ERROR!!";
        break;
}
    return 0;
}
