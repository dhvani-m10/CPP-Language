#include <iostream>
using namespace std;

class Shape
{
protected:
    int r, b, h;
    string color;

public:
    void set()
    {
        cout << "Enter colour : ";
        cin >> color;

        cout << "Color is : " << color << endl;
    }

    virtual double calculate() = 0;
};

class Circle : public Shape
{
public:
    double calculate()
    {
        
        cout << "Enter Radius : ";
        cin >> r;

        return 3.14 * r * r;
        set();
    }
};

class Rectangle : public Shape
{
public:
    double calculate()
    {
        
        cout << endl
             << "Enter Base : ";
        cin >> b;
        cout << "Enter Height : ";
        cin >> h;

        return b * h;
        set();
    }
};

int main()
{
    Circle c1;
    cout << "AREA OF CIRCLE IS : " << c1.calculate() << endl;

    Rectangle r1;
    cout << "AREA OF RECTANGLE IS : " << r1.calculate() << endl;

    return 0;
}