#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number for absolute value: ";
    cin >> a;
    if (a > 0)
    {
        cout << "Absolute number: " << a;
    }
    else if (a == 0)
    {
        cout << a;
    }
    else
    {
        cout << "Absolute number: "<< a * -1;
    }

    return 0;
}
