#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    //  (condition) ? if true : if false;
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}
