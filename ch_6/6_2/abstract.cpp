#include <iostream>

using namespace std;

class Math
{
public:
    virtual void circle() = 0;
    Math()
    {
        int r, b, h, l, w;
        double a1, a2, a3;
        int n;
        cout << "Select a shape: \n";
        cout << "1. Circle\n";
        cout << "2. Triangle\n";
        cout << "3. Rectangle\n";
        cout << "Enter your choice : ";
        cin >> n;
        switch (n)
        {

        case 1:
            cout << "Enter Radius : ";
            cin >> r;
            a1 = 3.14 * r * r;
            cout << endl << "THE AREA OF A CIRCEL: " << a1 << endl;
            break;
        case 2:
            cout << "Enter base : ";
            cin >> b;
            cout << "Enter height : ";
            cin >> h;
            a2 = 0.5 * b * h;
            cout << endl << "THE AREA OF A TRIANGLE: " << a2 << endl;
            break;
        case 3:
            cout << "Enter length : ";
            cin >> l;
            cout << "Enter width : ";
            cin >> w;
            a3 = w * l;
            cout << endl << "THE AREA OF A RECTANGLE: " << a3 << endl;
            break;
        default:
        {
            cout << "Invalid choice!!";
        }
        }
    }
};
class Math2 : public Math
{

public:
    void circle() {
    };

public:
    void Area()
    {
    }
};
