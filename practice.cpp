#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    cout << x << " " << y << " " << z;
    return 0;
}
