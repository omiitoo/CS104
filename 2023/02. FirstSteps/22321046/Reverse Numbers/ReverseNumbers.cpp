#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Number: ";
    cin >> a;

    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    cout <<"Reverse Number:"<< a1 << a2 << a3 << endl;

    return 0;
}
