#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    // float y = (float)x; // Original
    float y = float(x);      // 2nd way
    cout << y / 2;
    return 0;
}
