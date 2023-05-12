#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "Please enter a number for a = ";
    cin >> a;

    cout << "Please enter a number for b = ";
    cin >> b;


    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    if (a % b)
    cout << "a: " << (a % b) << endl;
    if (b % a)
    cout << "b: " << (b % a) << endl;

    return 0;
}
