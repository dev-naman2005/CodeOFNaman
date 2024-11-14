#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if (a%3==0 or a%5==0 and a%15!=0)
    {
        cout<<"Yes You got right number";
    }
    else
    {
        printf("Nope, wrong number");
    }
    
    return 0;
}
// 3 6 9 12 15 18 21 24 27
// 5 10 15 20 25 30 35 40