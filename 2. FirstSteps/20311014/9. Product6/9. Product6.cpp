﻿// 09. Произведение от цифрите на четните позиции на 6 цифрено цисло

#include <iostream>
using namespace std;
int main()
{
    // Създаване на променливите
    int a;

    // Въвеждане на шестцифреното число
    cout << "a = ?" << endl;
    cin >> a;

    // Разделяне на цифрите на числото
    int a2 = (a / 10000) % 10;
    int a4 = (a / 100) % 10;
    int a6 = (a / 1) % 10;

    // Пресмятане на произведението от цифрите на четните позиции
    int p = a2 * a4 * a6;

    // Oтпечатване на резултата
    cout << "Product = " << p << endl;

    return 0;
}