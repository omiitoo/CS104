#include <iostream>
using namespace std;
int main()
{
    // Max of two numbers
    int a, b;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    if (a > b)
    {
        cout << "a>b" << endl;
    }
    else
    {
        cout << "b>a" << endl;
    }

    return 0;
}