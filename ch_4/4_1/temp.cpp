#include <iostream>

using namespace std;

class P
{
protected:
    float c;
    float f;
    float k;
};

class Q : public P
{
public:
    void ToFehrenhit()
    {
        cout << "Enter Celsius : ";
        cin >> c;

        f = (c * 9 / 5) + 32;

        cout << "Into fehrenhit : " << f << endl;
    }
};

class R : public Q
{
public:
    void ToKelvin()
    {
        k = (f - 32) * 5 / 9 + 273.15;

        cout << "Into Kelvin : " << k << endl;
    }
};