// 3.1.cpp
// < Котович Вікторія Сергіївна >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;
 
    cout << "x = "; cin >> x;

    A = 5 * exp(3 * x);

    // Спосіб 1: використання скорочених форм розгалуження
    if (x <= -1)
        B = 3 + sin(abs(x));
    if (x > -1 && x <= 3)
        B = 2 * exp((x / 4) - 1);
    if (x > 3)
        B = 7 - sqrt(2 * pow(x, 3));

    y = A- B;

    cout << endl;
    cout << "y = " << y << endl;

    // Спосіб 2: використання повної форми розгалуження
    if (x <= -1)
        B = 3 + sin(abs(x));
    else
        if (x > 3)
            B = 7 - sqrt(2 * pow(x, 3));
        else
            B = 2 * exp((x / 4) - 1);
  


    y = A - B;

    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
