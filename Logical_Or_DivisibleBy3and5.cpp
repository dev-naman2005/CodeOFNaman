#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // if (n%3==0 and n%5==0)
    // // if (n%15==0)
    // {
    //     cout<<"Divisible by 5 and 3";
    // }
    // else
    // {
    //     cout<<"Not divisible by 5 and 3";
    // }

    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n % 3 == 0 or n % 5 == 0)    // if (n%15==0)
    {
        cout << "Divisible by 5 or 3";
    }
    else
    {
        cout << "Not divisible by 5 or 3";
    }

    return 0;
}
