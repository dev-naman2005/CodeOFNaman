#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int cp;
    int sp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    if (sp>cp)
    {
        cout<<"PROFIT!!!\n";
        cout<<"Profit made: "<<sp-cp;
    }
    else if (sp<cp)
    {
        cout<<"LOSS\n";
        cout<<"Loss incurred: "<<sp-cp;
    }
    else
    {
        cout<<"You got no profit no loss";
    }

    return 0;
}
