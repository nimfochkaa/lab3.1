// 3.1.cpp
// < ������� ³����� ���㳿��� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 6

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

    // ����� 1: ������������ ���������� ���� ������������
    if (x <= -1)
        B = 3 + sin(abs(x));
    if (x > -1 && x <= 3)
        B = 2 * exp((x / 4) - 1);
    if (x > 3)
        B = 7 - sqrt(2 * pow(x, 3));

    y = A- B;

    cout << endl;
    cout << "y = " << y << endl;

    // ����� 2: ������������ ����� ����� ������������
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
