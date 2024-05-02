#include <iostream>

using namespace std;

class shape
{
protected:
    int l;
    int b;
    int r;
    int h;
    int t;
};

class Triangle : public shape
{
public:
    void area()
    {
        cout << "Enter b : ";
        cin >> b;

        cout << "Enter h : ";
        cin >> h;

        t = 0.5 * b * h;

        cout << "Area of Triangle : " << t << endl;
    }
};

class Rectangle : public shape
{

public:
    void area()
    {
        cout << "Enter l : ";
        cin >> l;

        cout << "Enter b : ";
        cin >> b;

        r = l * b;

        cout << "Area of Rectangle : " << r << endl;
    }
};
