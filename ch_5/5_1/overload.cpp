#include <iostream>
using namespace std;

class A
{

public:
    int a, b, c, d, e;

public:
    void set()
    {
        cout << "Enter a : ";
        cin >> a;

        cout << "Enter b : ";
        cin >> b;

        cout << "Enter c : ";
        cin >> c;

        cout << "Enter d : ";
        cin >> d;

        cout << "Enter e : ";
        cin >> e;
    }
};
class B : public A
{
public:
    void calc(int a, int b)
    {
        cout << "=>Division: " << a / b << endl;
    }

    void calc(int a, int b, int c)
    {
        cout << "=>Subtraction: " << a - b - c << endl;
    }

    void calc(int a, int b, int c, int d)
    {
        cout << "=>Multiplication: " << a * b * c * d << endl;
    }

    void calc(int a, int b, int c, int d, int e)
    {
        cout << "=>Addition: " << a + b + c + d + e << endl;
    }
};